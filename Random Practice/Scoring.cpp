//https://www.codechef.com/problems/SCORING
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
    int X, Y;
    cin >> X >> Y;

    int A = (Y / 2) + (X / 2);
    int B = (Y / 2) - (X / 2);
    if (Y % 2 == 0)
      cout << A << " " << B << '\n';
    else
      cout << A + 1 << " " << B << '\n';
  }

  return 0;
}