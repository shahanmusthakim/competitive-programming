// https://cses.fi/problemset/task/1095/
#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
void power(int A, int B)
{
    int ans = 1 % mod;
    while (B)
    {
        if (B & 1)
        {
            ans = (1LL * (ans % mod) * (A % mod) % mod);
        }
        A = 1LL * A * A % mod;
        B >>= 1;
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        power(A, B);
    }

    return 0;
}