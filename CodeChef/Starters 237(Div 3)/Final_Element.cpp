//https://www.codechef.com/START237C/problems/FINELE
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
    int N;
    cin>>N;
    vector<int>v,v2;
    for(int i=0;i<N;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }
    for(int j=0;j<N-1;j++){
        for(int i=0;i<N-1;i++){
        v2.push_back(v[i]^v[i+1]);
       }
       v.clear();
       v.insert(v.end(),v2.begin(),v2.end());
       v2.clear();
    }
    cout<<v[0]<<endl;
  }
  return 0;
}