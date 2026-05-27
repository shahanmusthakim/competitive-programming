// https://www.codechef.com/START240C/problems/CYCYC
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
    vector<int> v(N);
    for (int i = 0; i < N; i++)
      cin >> v[i];
    int cnt = 0;
    int mn = *min_element(v.begin(), v.end());
    for (int i = 0; i < N; i++)
    {
      if (v[i] == mn)
        cnt++;
    }
    if (cnt >= 2)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}