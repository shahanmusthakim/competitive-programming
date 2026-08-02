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
    int A,B;
    cin>>A>>B;
    if(2*A<=B)cout<<A<<" "<<2*A<<'\n';
    else cout<<"-1 -1\n";
  } 
  return 0;
}