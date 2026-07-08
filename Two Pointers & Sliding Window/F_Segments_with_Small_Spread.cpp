//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N, Q;
    cin >> N >> Q;
    vector<ll> v(N);
    for (ll i = 0; i < N; i++)
        cin >> v[i];
    ll ans = 0, i = 0, j = 0;
    multiset<ll> m;
    while (j < N)
    {
        m.insert(v[j]);
        ll mn = *m.begin();
        ll mx = *m.rbegin();
        if (mx - mn <= Q)
        {
            ans += j - i + 1;
        }
        else
        {
            while (i <= j)
            {
                mn = *m.begin();
                mx = *m.rbegin();
                if (mx - mn <= Q)
                    break;
                m.erase(m.find(v[i]));
                i++;
            }
            mn = *m.begin();
            mx = *m.rbegin();
            if (mx - mn <= Q)
            {
                ans += j - i + 1;
            }
        }
        j++;
    }
    cout << ans;

    return 0;
}