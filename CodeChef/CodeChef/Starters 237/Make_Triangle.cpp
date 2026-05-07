//https://www.codechef.com/START237C/problems/MAKETRIANGLE
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
    int A,B,C;
    cin>>A>>B>>C;
    int move=0;
    int mx=max({A,B,C});
    if(A==mx){
        if((B+C)>A){
            cout<<0<<endl;
            continue;
        }
        else if((B+C)<A){
           move=A-(B+C)+1;
        }
        else if(A==(B+C)) move=1;
    }
    else if(B==mx){
        if((A+C)>B){
            cout<<0<<endl;
            continue;
        }
        else if((A+C)<B){
           move=B-(A+C)+1;
        }
        else if(B==(A+C)) move=1;
    }
    else if(C==mx){
        if((B+A)>C){
            cout<<0<<endl;
            continue;
        }
        else if(B+A<C){
           move=C-(B+A)+1;
        }
        else if(C==(B+A)) move=1;
    }
    cout<<move<<endl;

  }
  
  
   
  return 0;
}