#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  while (T--)
  {
    int N,K;
    cin>>N>>K;
    int curr=1;
    while (curr+K<=N)
    {
        curr+=K;
    }
    cout<<curr<<'\n';
  }
  
  
   
  return 0;
}