// https://www.codechef.com/START240C/problems/FREQP
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
    sort(v.begin(), v.end());
    int M = 1, fre = 1;
    for (int i = 0; i < N; i++)
    {
      if (v[i] == v[i - 1])
        fre++;
      else
      {
        M = max(M, fre);
        fre = 1;
      }
    }
    M = max(M, fre);
    cout << N - M + 1 << endl;
  }

  return 0;
}