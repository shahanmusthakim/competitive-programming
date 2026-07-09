// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
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
    ll ans = 0, cnt = 0, i = 0, j = 0;
    while (j < N)
    {
        cnt += v[j];
        if (cnt >= M)
        {
            while (cnt >= M)
            {
                ans += N - j;
                cnt -= v[i];
                i++;
            }
        }
        j++;
    }

    cout << ans;

    return 0;
}