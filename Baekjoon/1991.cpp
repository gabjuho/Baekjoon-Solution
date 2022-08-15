#include<iostream>
#include<queue>
using namespace std;

class BinaryTreeNode
{
public:
	char data;
	BinaryTreeNode* leftNode;
	BinaryTreeNode* rightNode;
};

class BinaryTree
{
public:
	char data;
	BinaryTreeNode* rootNode;
};

BinaryTreeNode* tempNode;
BinaryTree* makeBT(char data);
BinaryTreeNode* makeNode(char data);
BinaryTreeNode* addLeftNode(BinaryTreeNode* parentNode, char data);
BinaryTreeNode* addRightNode(BinaryTreeNode* parentNode, char data);
void searchValue(BinaryTreeNode* pNode, char data);
void preorderTraversalTree(BinaryTree *tree);
void preorderTraversalNode(BinaryTreeNode* pNode);
void inorderTraversalTree(BinaryTree* tree);
void inorderTraversalNode(BinaryTreeNode* pNode);
void postorderTraversalTree(BinaryTree* tree);
void postorderTraversalNode(BinaryTreeNode* pNode);

int main()
{
	BinaryTree* tree = NULL;
	BinaryTreeNode* pNode = NULL, * pRootNode;
	int n, count = 1;
	cin >> n;

	char nodeData, left, right;
	cin >> nodeData >> left >> right;

	tree = makeBT(nodeData);
	pRootNode = tree->rootNode;

	if (left != '.')
		addLeftNode(pRootNode, left);
	if (right != '.')
		addRightNode(pRootNode, right);

	if (n >= 2)
	{
		while (count < n)
		{
			cin >> nodeData >> left >> right;
			searchValue(pRootNode, nodeData);
			pNode = tempNode;

			if (left != '.')
				addLeftNode(pNode, left);
			if (right != '.')
				addRightNode(pNode, right);
			count++;
		}
	}

	preorderTraversalTree(tree);
	inorderTraversalTree(tree);
	postorderTraversalTree(tree);
}

BinaryTree* makeBT(char data)
{
	BinaryTree* pReturn = new BinaryTree();
	if (pReturn != NULL)
	{
		pReturn->rootNode = makeNode(data);
		pReturn->rootNode->leftNode = NULL;
		pReturn->rootNode->rightNode = NULL;
	}
	return pReturn;
}
BinaryTreeNode* makeNode(char data)
{
	BinaryTreeNode* pReturn = new BinaryTreeNode();
	if (pReturn != NULL)
	{
		pReturn->data = data;
	}
	return pReturn;
}
BinaryTreeNode* addLeftNode(BinaryTreeNode* parentNode, char data)
{
	BinaryTreeNode* pReturn = NULL;
	if (parentNode != NULL)
	{
		if (parentNode->leftNode == NULL)
		{
			parentNode->leftNode = makeNode(data);
			pReturn = parentNode->leftNode;
			return pReturn;
		}
	}
}
BinaryTreeNode* addRightNode(BinaryTreeNode* parentNode, char data)
{
	BinaryTreeNode* pReturn = NULL;
	if (parentNode != NULL)
	{
		if (parentNode->rightNode == NULL)
		{
			parentNode->rightNode = makeNode(data);
			pReturn = parentNode->rightNode;
			return pReturn;
		}
	}
}
void searchValue(BinaryTreeNode* pNode, char data)
{
	if (pNode->data == data)
		tempNode = pNode;
	else
	{
		if (pNode->leftNode != NULL)
			searchValue(pNode->leftNode, data);
		if (pNode->rightNode != NULL)
			searchValue(pNode->rightNode, data);
	}
}

void preorderTraversalTree(BinaryTree* tree)
{
	if (tree != NULL)
	{
		if (tree->rootNode != NULL)
		{
			preorderTraversalNode(tree->rootNode);
			cout << '\n';
		}
	}
}
void preorderTraversalNode(BinaryTreeNode* pNode)
{
	cout << pNode->data;
	if(pNode->leftNode != NULL)
		preorderTraversalNode(pNode->leftNode);
	if(pNode->rightNode != NULL)
		preorderTraversalNode(pNode->rightNode);
}
void inorderTraversalTree(BinaryTree* tree)
{
	if (tree != NULL)
	{
		if (tree->rootNode != NULL)
		{
			inorderTraversalNode(tree->rootNode);
			cout << '\n';
		}
	}
}
void inorderTraversalNode(BinaryTreeNode* pNode)
{
	if (pNode->leftNode != NULL)
		inorderTraversalNode(pNode->leftNode);
	cout << pNode->data;
	if (pNode->rightNode != NULL)
		inorderTraversalNode(pNode->rightNode);
}
void postorderTraversalTree(BinaryTree* tree)
{
	if (tree != NULL)
	{
		if (tree->rootNode != NULL)
		{
			postorderTraversalNode(tree->rootNode);
			cout << '\n';
		}
	}
}
void postorderTraversalNode(BinaryTreeNode* pNode)
{
	if (pNode->leftNode != NULL)
		postorderTraversalNode(pNode->leftNode);
	if (pNode->rightNode != NULL)
		postorderTraversalNode(pNode->rightNode);
	cout << pNode->data;
}