#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>> T;
  while (T--)
  {
    int N;
    cin>>N;
    map<int,int>m;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    int ans=0,last=0,cnt=0;
    for(auto x:m){
      int curr=x.first;
      int freq=x.second;
      if(curr==last+1){
        if(cnt<freq){
            ans+=(freq-cnt);
        }
      }
      else{
        ans+=freq;
      }
      last=curr;
      cnt=freq;
    }
    cout<<ans<<'\n';

  }
  
  return 0;
}