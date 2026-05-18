// https://www.codechef.com/problems/AP
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if ((Y - X) == (Z - Y))
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}