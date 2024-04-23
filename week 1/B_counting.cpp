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

    int a, b;
    cin >> a >> b;
    (a < b) ? cout << b - a + 1 << '\n' : cout << 0 << '\n';
    return 0;
}