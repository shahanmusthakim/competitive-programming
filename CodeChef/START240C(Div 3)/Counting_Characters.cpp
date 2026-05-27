// https://www.codechef.com/START240C/problems/COUNTAB
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
    string S;
    cin >> S;
    int count_a = 0, count_b = 0;
    for (int i = 0; i < N; i++)
    {
      if (S[i] == 'a')
        count_a++;
      if (S[i] == 'b')
        count_b++;
    }
    cout << count_a << " " << count_b << '\n';
  }

  return 0;
}