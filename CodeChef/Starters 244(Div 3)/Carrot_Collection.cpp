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
    int N,L,R;
    cin>>N>>L>>R;
    vector<int>v(N+1);
    for(int i=1;i<=N;i++)cin>>v[i];
    int left=0,right=0;
    for(int i=1;i<=N;i++){
        if(i<L)left+=v[i];
        if(i>R)right+=v[i];
    }
    cout<<max(left,right)<<endl;
  }
  
   
  return 0;
}