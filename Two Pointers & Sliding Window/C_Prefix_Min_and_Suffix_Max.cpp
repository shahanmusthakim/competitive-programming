// https://codeforces.com/problemset/problem/2123/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;
    vector<int> v(N), pref(N), suff(N);
    for (int i = 0; i < N; i++)
      cin >> v[i];
    pref[0] = v[0];
    for (int i = 1; i < N; i++)
    {
      pref[i] = min(v[i], pref[i - 1]);
    }
    suff[N - 1] = v[N - 1];
    for (int i = N - 2; i >= 0; i--)
    {
      suff[i] = max(v[i], suff[i + 1]);
    }
    for (int i = 0; i < N; i++)
    {
      if (v[i] == suff[i] || v[i] == pref[i])
        cout << 1;
      else
        cout << 0;
    }
    cout << endl;
  }

  return 0;
}