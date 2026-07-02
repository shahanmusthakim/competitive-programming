//https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N, K;
    cin >> N >> K;
    vector<ll> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    ll ans = 0, cnt = 0;
    int i = 0, j = 0;
    while (i < N)
    {
        if (cnt == K)
        {
            ans++;
            cnt -= v[i];
            i++;
        }
        else if (cnt > K)
        {
            cnt -= v[i];
            i++;
        }
        else
        {
            if (j < N)
            {
                cnt += v[j];
                j++;
            }
            else
                break;
        }
    }
    cout << ans << '\n';

    return 0;
}