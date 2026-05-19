//https://www.codechef.com/problems/GYMDAY
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
        int D, X, Y;
        cin >> D >> X >> Y;
        int ans = 0;
        if (X <= Y)
            cout << 0 << endl;
        else
        {
            bool ok = false;
            while (Y > 0)
            {
                Y--;
                ans++;
                int dis = X - (((D * ans) * X) / 100);
                if (Y >= dis)
                {
                    ok = true;
                    break;
                }
            }
            if (!ok)
                cout << -1 << endl;
            else
                cout << ans << endl;
        }
    }

    return 0;
}