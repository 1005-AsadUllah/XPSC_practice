/**
 *    author:  AsadUllah
 **/
#include <bits/stdc++.h>

#define For(i, n) for (int i = 0; i < n; i++)
#define For2(i, n) for (int i = 0; i <= n; i++)

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    long long k = c;
    while (k < a)
    {
        k *= 2;
    }

    (k < b) ? cout << k << '\n' : cout << -1 << '\n';
    return 0;
}