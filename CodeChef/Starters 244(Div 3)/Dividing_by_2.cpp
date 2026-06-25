#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin>>T;
  while (T--)
  {
    ll N;
    cin>>N;
    vector<ll>v(N);
    map<ll,ll>cnt;
    map<ll,ll>ops;
    for(int i=0;i<N;i++){
        cin>>v[i];
        ll val=v[i];
        ll ops_need=0;
        set<ll>visited;
        while (true)
        {
            if(visited.find(val)==visited.end()){
                cnt[val]++;
                ops[val]+=ops_need;
                visited.insert(val);
            }
            if(val==0)break;
                val/=2;
                ops_need++;
            

        }
    }

        ll mn=-1;
        for(auto &x : cnt){
            if(x.second==N){
              if(mn==-1 || ops[x.first]<mn){
                mn=ops[x.first];
              }
            }
        }
        cout<<mn<<endl;
        



  }
  
  
   
  return 0;
}