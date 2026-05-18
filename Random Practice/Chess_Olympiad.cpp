// https://www.codechef.com/problems/CHOLY
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B, C;
    cin >> A >> B >> C;
    if (A + B + C == 4)
    {
        if (A > C)
            cout << "Yes";
        else
            cout << "No";
    }
    else
    {
        int my = A + (B * 0.5);
        int opp = C + (B * 0.5);
        int m = 4 - (A + B + C);
        if ((m + my) > opp)
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}