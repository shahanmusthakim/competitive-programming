#include <bits/stdc++.h>
using namespace std;
int dis[100005];
int sz[100005];
int com,mx=1;
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
        mx=max(mx,sz[leader2]); 
    }
    else{
        dis[leader2]=leader1;
        sz[leader1]+=sz[leader2];
        mx=max(mx,sz[leader1]); 
    }
    com--;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N,M;
  cin>>N>>M;
  com=N;
  for(int i=1;i<=N;i++){
    dis[i]=-1;
    sz[i]=1;
  }
  while (M--)
  {
    int A,B;
    cin>>A>>B;
    group(A,B);
    cout<<com<<" "<<mx<<'\n';
  }
 
  
  
   
  return 0;
}



    