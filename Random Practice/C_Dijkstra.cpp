#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,ll>>v[100005];
ll cost[100005];
ll pre[100005];
void dijkstra(ll s){
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>p;
    p.push({0,s});
    cost[s]=0;
    while (!p.empty())
    {
        pair<ll,ll>par=p.top();
        p.pop();
        ll pi=par.first;   
        ll pj=par.second;
        for(auto x : v[pj]){
            ll xi=x.first;
            ll xj=x.second;
            if(pi+xj<cost[xi]){
                cost[xi]=pi+xj;
                p.push({cost[xi],xi});
                pre[xi]=pj;

            }
        }   
    }
    

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll N,M;
  cin>>N>>M;
  while (M--)
  {
    ll A,B,C;
    cin>>A>>B>>C;
    v[A].push_back({B,C});
    v[B].push_back({A,C});
  }
  for(int i=1;i<=N;i++){
    cost[i]=LLONG_MAX;
    pre[i]=-1;
  }

  dijkstra(1);
  if(cost[N]==LLONG_MAX){
    cout<<-1<<'\n';
    return 0;
  }
  ll tmp=N;
  vector<int>ans;
  while (tmp!=-1)
  {
    ans.push_back(tmp);
    tmp=pre[tmp];
  }
  reverse(ans.begin(),ans.end());
  for(auto x : ans)cout<<x<<" ";
  
  
   
  return 0;
}