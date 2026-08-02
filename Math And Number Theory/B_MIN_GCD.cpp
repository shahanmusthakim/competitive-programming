// https://codeforces.com/problemset/problem/2084/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll GCD(ll A, ll B)
{
    return __gcd(A, B);
}
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
        ll mn = LLONG_MAX;
        for (ll i = 0; i < N; i++)
        {
            cin >> v[i];
            mn = min(v[i], mn);
        }
        ll curr_gcd = 0, cnt = 0;
        for (ll i = 0; i < N; i++)
        {
            if (v[i] == mn)
                cnt++;
            if (v[i] % mn == 0 && v[i] != mn)
            {
                curr_gcd = GCD(curr_gcd, v[i]);
            }
        }
        if (cnt >= 2 || curr_gcd == mn)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}