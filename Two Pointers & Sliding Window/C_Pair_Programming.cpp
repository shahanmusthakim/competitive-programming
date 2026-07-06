//https://codeforces.com/problemset/problem/1547/C
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
    int K,N,M;
    cin>>K>>N>>M;
    vector<int>mono(N),poly(M),ans;
    for(int i=0;i<N;i++)cin>>mono[i];
    for(int i=0;i<M;i++)cin>>poly[i];
    int i=0,j=0;
    bool ok=true;
    while (i<N || j<M)
    {
        if (i < N && (mono[i] == 0 || mono[i] <= K)) {
                if (mono[i]== 0)K++;
                ans.push_back(mono[i]);
                i++; 
            }
        else if (j<M &&(poly[j]==0||poly[j]<=K)) {
                if (poly[j] == 0) K++; 
                ans.push_back(poly[j]);
                j++; 
            }
        else {
            ok=false;
            break;
        }    
    }
  
    if(ok){
    for(int x : ans)cout<<x<<" ";
  }
  else cout<<-1;
  cout<<'\n';
}
  
  return 0;
}