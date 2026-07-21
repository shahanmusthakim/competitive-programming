// https://cses.fi/problemset/task/2428
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
    ll i = 0, j = 0, ans = 0;
    map<ll, ll> m;
    while (j < N)
    {
        m[v[j]]++;
        if (m.size() <= M)
        {
            ans += (j - i) + 1;
        }
        else
        {
            while (m.size() > M)
            {
                m[v[i]]--;
                if (m[v[i]] == 0)
                    m.erase(v[i]);
                i++;
            }
            if (m.size() <= M)
            {
                ans += (j - i) + 1;
            }
        }
        j++;
    }

    cout << ans;

    return 0;
}