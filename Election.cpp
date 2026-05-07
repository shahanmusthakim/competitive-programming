//https://www.codechef.com/START237C/problems/ELECTION1
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N,K;
  cin>>N>>K;
  int X=(N/2)+1;
  if(X<=K)cout<<0;
  else cout<<X-K;
  return 0;
}