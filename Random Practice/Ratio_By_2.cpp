// https://www.codechef.com/problems/RATIO2
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
        int A, B;
        cin >> A >> B;
        if (A * 2 <= B || A >= B * 2)
            cout << 0 << endl;
        else
        {
            int mn = min(A, B);
            int mx = max(A, B);
            int tmp1 = mn - (mx / 2);
            int tmp2 = (mn * 2) - mx;
            cout << min(tmp1, tmp2) << endl;
        }
    }
    return 0;
}