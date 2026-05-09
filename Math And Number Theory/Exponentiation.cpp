// https://cses.fi/problemset/result/17125854/
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int power(int X, int N)
{
    int ans = 1 % MOD;
    while (N)
    {
        if (N & 1)
        {
            ans = (1LL * ans % MOD * X % MOD) % MOD;
        }
        X = 1LL * X * X % MOD;
        N >>= 1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int X, N;
        cin >> X >> N;
        cout << power(X, N) << endl;
    }

    return 0;
}