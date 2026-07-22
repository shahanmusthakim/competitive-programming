// https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll min_diff(ll idx, ll first, ll last, const vector<ll> &v)
{
    if (idx == v.size())
        return abs(first - last);
    ll diff1 = min_diff(idx + 1, first + v[idx], last, v);
    ll diff2 = min_diff(idx + 1, first, last + v[idx], v);
    return min(diff1, diff2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<ll> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    ll ans = min_diff(0, 0, 0, v);
    cout << ans;

    return 0;
}
