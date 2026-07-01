#include <bits/stdc++.h>
using namespace std;
#define ll long long    
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll N,M;
  cin>>N>>M;
  vector<ll>v(N),pre(N);
  for(ll i=0;i<N;i++)cin>>v[i];
  map<ll,ll>m;
  pre[0]=v[0];
  for(ll i=1;i<N;i++){
    pre[i]=pre[i-1]+v[i];
  }
  m[0]++;
  ll ans=0;
  for(ll i=0;i<N;i++){
    ll need=pre[i]-M;
    ans+=m[need];
    m[pre[i]]++;
  }
  cout<<ans;
  return 0;
}