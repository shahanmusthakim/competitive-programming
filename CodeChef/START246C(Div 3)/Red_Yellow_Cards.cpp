// https://www.codechef.com/problems/RYCARDS
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
        int r, y;
        cin >> r >> y;
        cout << r + max(0, (y - r) / 2) << endl;
    }

    return 0;
}