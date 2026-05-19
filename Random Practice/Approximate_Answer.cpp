//https://www.codechef.com/problems/P1149
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int tmp = abs(X - Y);
    if (tmp <= Z)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}