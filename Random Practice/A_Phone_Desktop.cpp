// https://codeforces.com/contest/1974/problem/A
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
    int N, M;
    cin >> N >> M;
    int ans = M / 2;
    int hold = ans * 7;
    if ((ans * 2) != M)
    {
      ans++;
      hold += 11;
    }
    if (N <= hold)
    {
      cout << ans << '\n';
    }
    else
    {
      int x = N - hold;
      ans += ceil(x / 15.0);
      cout << ans << '\n';
    }
  }

  return 0;
}