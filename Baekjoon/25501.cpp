#include <iostream>
#include <cstring>
using namespace std;

int cnt;

int recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {

    int n;
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char str[1001];
        cin >> str;
        cout << isPalindrome(str) << " " << cnt << '\n';
        cnt = 0;
    }
}