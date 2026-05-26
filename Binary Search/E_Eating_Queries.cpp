//https://codeforces.com/problemset/problem/1676/E
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
   vector<int>v(N),pre(N);
   for(int i=0;i<N;i++)cin>>v[i];
   sort(v.rbegin(),v.rend());
  
   pre[0]=v[0];
   for(int i=1;i<N;i++){
    pre[i]=pre[i-1]+v[i];
   }
  
   for(int i=0;i<K;i++){
    int x,ans=-1;
    cin>>x;
    auto it=lower_bound(pre.begin(),pre.end(),x);
    if(it!=pre.end()){
        ans=(it-pre.begin())+1;
    }
    cout<<ans<<'\n';
   }
  }

  
  
   
  return 0;
}