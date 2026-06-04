// https://codeforces.com/problemset/problem/1538/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll T;
  cin >> T;
  while (T--)
  {
    ll N, L, R;
    cin >> N >> L >> R;
    vector<ll> v(N), tmp;
    for (ll i = 0; i < N; i++)
      cin >> v[i];
    ll ans = 0;
    sort(v.begin(), v.end());
    for (ll i = 0; i < N - 1; i++)
    {
      auto low = lower_bound(v.begin() + i + 1, v.end(), L - v[i]);
      auto upper = upper_bound(v.begin() + i + 1, v.end(), R - v[i]);
      ans += upper - low;
    }
    cout << ans << '\n';
  }
  return 0;
}