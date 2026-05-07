//https://www.codechef.com/START237C/problems/DIVKIDS
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
    int N,X;
    cin>>N>>X;
    vector<int>v(N);
    for(int i=0;i<N;i++)cin>>v[i];
    int ans=0;
    for(int i=0;i<N;i++){
        if(v[i]%X==0){
            ans=max(ans,v[i]);
        }
    }
    cout<<ans<<endl;
  }
  return 0;
}