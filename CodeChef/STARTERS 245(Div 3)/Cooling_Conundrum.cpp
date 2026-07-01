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
    int ans = 0;
    while (N > M)
    {
      ans += (N + 9) / 10;
      N--;
    }
    cout << ans << '\n';
  }

  return 0;
}