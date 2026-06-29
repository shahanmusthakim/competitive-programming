// https://cses.fi/problemset/task/1640/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N, X;
  cin >> N >> X;
  vector<int> v(N + 1);
  map<int, int> m;
  bool ok = false;
  int a = -1, b = -1;
  for (int i = 1; i <= N; i++)
  {
    cin >> v[i];
    int need = X - v[i];
    if (m.count(need))
    {
      a = i;
      b = m[need];
      ok = true;
      break;
    }
    m[v[i]] = i;
  }
  if (!ok)
    cout << "IMPOSSIBLE";
  else
    cout << a << " " << b;

  return 0;
}