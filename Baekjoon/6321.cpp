#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     for(int i=0; i<n;i++)
     {
         string str;
         cin>>str;
         for(int j=0;j<str.size(); j++)
         {
            str[j]++;
            if(str[j] > 'Z')
                str[j] = 'A'; 
         }
         cout<<"String #"<<i+1<<'\n';
         cout<<str<<"\n\n";
     }
}