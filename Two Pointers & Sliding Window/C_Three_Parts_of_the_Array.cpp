// https://codeforces.com/problemset/problem/1006/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
    cin >> N;
    vector<ll> v(N);
    for (ll i = 0; i < N; i++)
        cin >> v[i];
    ll cntA = 0, cntB = 0, ans = 0;
    int i = 0, j = N - 1;
    while (i <= j)
    {
        if (cntA > cntB)
        {
            cntB += v[j];
            j--;
        }
        else
        {
            cntA += v[i];
            i++;
        }
        if (cntA == cntB)
        {
            ans = max(cntA, ans);
        }
    }
    cout << ans;

    return 0;
}