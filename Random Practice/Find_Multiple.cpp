// https://atcoder.jp/contests/abc220/tasks/abc220_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int A, B, C;
  cin >> A >> B >> C;
  int ans = -1, tmp = 0;
  for (int i = 0;; i++)
  {
    tmp += C;
    if (A <= tmp && B >= tmp)
    {
      ans = tmp;
      break;
    }
    if (tmp > B)
      break;
  }
  cout << ans;

  return 0;
}