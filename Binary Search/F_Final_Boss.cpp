// https://codeforces.com/problemset/problem/1985/F
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(ll H, ll N, vector<ll> a, vector<ll> c, ll mid)
{
    ll cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cnt = min(cnt + (1 + (mid - 1) / c[i]) * a[i], H);
    }
    return cnt == H;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll H, N;
        cin >> H >> N;
        vector<ll> a(N), c(N);
        for (int i = 0; i < N; i++)
            cin >> a[i];
        for (int i = 0; i < N; i++)
            cin >> c[i];
        ll l = 0, r = 10e11;
        while (l + 1 < r)
        {
            ll mid = l + (r - l) / 2;
            if (ok(H, N, a, c, mid))
                r = mid;
            else
                l = mid;
        }
        cout << r << '\n';
    }

    return 0;
}