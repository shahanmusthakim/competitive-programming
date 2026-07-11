// https://codeforces.com/problemset/problem/2183/A
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
    int first = 0, last = 0, cnt_zero = 0;
    for (int i = 0; i < N; i++)
    {
      int x;
      cin >> x;
      if (i == 0)
        first = x;
      if (i == (N - 1))
        last = x;
      if (x == 0)
        cnt_zero++;
    }
    if (first == 1 || last == 1 || cnt_zero == 0)
      cout << "Alice\n";
    else
      cout << "Bob\n";
  }

  return 0;
}