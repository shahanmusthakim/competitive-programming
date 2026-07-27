// https://www.codechef.com/problems/FUM
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int mod = 1e9 + 7;
    while (T--)
    {
        int N;
        cin >> N;
        long long ans = 1;
        for (int i = 1; i <= N; i++)
        {
            ans = ((ans % mod) * (i % mod)) % mod;
        }
        cout << ans << '\n';
    }

    return 0;
}