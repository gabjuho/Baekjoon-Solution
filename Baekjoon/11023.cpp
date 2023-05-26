#include<iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    while (~scanf("%d", &n))
    {
        ans += n;
    }
    cout << ans << '\n';
}