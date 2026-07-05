// https://codeforces.com/problemset/problem/1840/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll N, K, Q;
        cin >> N >> K >> Q;
        vector<ll> v(N);
        for (ll i = 0; i < N; i++)
            cin >> v[i];
        ll ans = 0;
        ll L = 0;
        for (ll i = 0; i < N; i++)
        {
            if (v[i] <= Q)
                L++;
            else
            {
                if (L >= K)
                {
                    ll tmp = L - K + 1;
                    ans += (tmp * (tmp + 1)) / 2;
                }
                L = 0;
            }
        }
        if (L >= K)
        {
            ll tmp = L - K + 1;
            ans += (tmp * (tmp + 1)) / 2;
        }
        cout << ans << '\n';
    }

    return 0;
}