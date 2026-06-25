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
   string A,B;
   cin>>A>>B;
   
   string X="";
   for(int i=0;i<N;i++){
    if(i!=0 || A[i]!=A[i-1])X+=A[i];
   }

    string Y="";
   for(int i=0;i<N;i++){
    if(i!=0 || B[i]!=B[i-1])Y+=B[i];
   }

   int i=0,j=0;
   while (i<X.length() && j<Y.length()){
      if(X[i]==Y[j])j++;
      else i++; 
   }
   if(j==Y.length())cout<<"Yes\n";
   else cout<<"No\n";
  
}
   
  return 0;
}