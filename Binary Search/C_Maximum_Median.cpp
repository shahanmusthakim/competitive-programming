// https://codeforces.com/problemset/problem/1201/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N, M;
    cin >> N >> M;
    vector<ll> v(N);
    for (ll i = 0; i < N; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for (ll i = (N / 2); i < N; i++)
        {
            if (v[i] < mid)
            {
                cnt += mid - v[i];
            }
        }
        return cnt <= M;
    };
    ll l = 1, r = 2e9, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;

    return 0;
}