#include <bits/stdc++.h>
using namespace std;
long long GCD(long long A,long long B){
    return __gcd(A,B);
}
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
    vector<long long>vec(N);
    for(int i=0;i<N;i++)cin>>vec[i];
    long long mn=*min_element(vec.begin(),vec.end());
    int count=0;
    for(int i=0;i<N;i++){
        if(vec[i]==mn)count++;
    }
    if(count>1)cout<<"Yes"<<endl;
    else{
       long long g=0;
       for(auto x:vec){
        if(x%mn==0 && x!=mn){
            g=GCD(g,x);
        }
       }
       (g==mn)?cout<<"Yes":cout<<"No";
       cout<<endl;
    
    }
  } 
  return 0;
}