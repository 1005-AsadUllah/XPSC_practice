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

    int mx = max(a, b);
    int m = min(a, b);

    int sum = mx;

    ((mx - 1) > m) ? sum += (mx - 1) : sum += m;

    cout << sum << '\n';

    return 0;
}