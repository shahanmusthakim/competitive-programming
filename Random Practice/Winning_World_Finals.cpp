// https://www.codechef.com/problems/WFWIN
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
        int M, P;
        cin >> M >> P;
        int ans = 0;
        for (int i = 0; M + i < 300; i++)
        {

            int tmp = P + (20 * i) + (M + i);
            if (tmp <= 1000)
                ans = i;
            else
                break;
        }
        cout << ans << endl;
    }

    return 0;
}