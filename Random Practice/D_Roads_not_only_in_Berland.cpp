#include <bits/stdc++.h>
using namespace std;
int dis[1005];
int sz[1005];
int find(int N){
    if(dis[N]==-1)return N;
    int leader=find(dis[N]);
    dis[N]=leader;
    return leader;
}
void group(int a,int b){
    int leader1=find(a);
    int leader2=find(b);
    if(leader1==leader2)return;
    if(sz[leader1]<sz[leader2]){
        dis[leader1]=leader2;
        sz[leader2]+=sz[leader1];
    }
    else{
        dis[leader2]=leader1;
        sz[leader1]+=sz[leader2];
    }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin>>N;
  for(int i=1;i<=N;i++)dis[i]=-1;
  for(int i=1;i<=N;i++)sz[i]=1;
  vector<pair<int,int>>p;
  vector<pair<int,int>>v;
  for(int i=0;i<N-1;i++)
  {
    int A,B;
    cin>>A>>B;
    int leader1=find(A);
    int leader2=find(B);
    if(leader1==leader2){
        p.push_back({A,B});
    }
    else{
        group(A,B);
    }
  }
  for(int i=2;i<=N;i++){
    int leader1=find(1);
    int leader2=find(i);
    if(leader1!=leader2){
        v.push_back({i,1});
        group(1,i);
  }
}
int len=v.size();
cout<<len<<'\n';
for(int i=0;i<len;i++){
    cout<<p[i].first<<" "<<p[i].second<<" "<<v[i].first<<" "<<v[i].second<<'\n';
}
  
   
  return 0;
}