//https://www.codechef.com/problems/KARR
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
    vector<int> v(N), v1;
    for (int i = 0; i < N; i++)
      cin >> v[i];
    v1.insert(v1.end(), v.begin(), v.end());
    sort(v1.begin(), v1.end());
    if (v == v1)
      cout << 0 << endl;
    else
    {

      int mx = 0;
      for (int i = 0; i < N; i++)
      {
        if (v[i] != v1[i])
        {
          mx = max(mx, v[i]);
        }
      }
      cout << mx + 1 << endl;
    }
  }

  return 0;
}