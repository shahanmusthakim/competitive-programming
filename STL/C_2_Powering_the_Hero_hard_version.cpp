// https://codeforces.com/problemset/problem/1800/C2
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
        ll N;
        cin >> N;
        vector<ll> v(N);
        priority_queue<ll> pq;
        ll ans = 0;
        for (ll i = 0; i < N; i++)
            cin >> v[i];
        for (ll i = 0; i < N; i++)
        {
            if (v[i] != 0)
                pq.push(v[i]);
            else
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}