// https://www.codechef.com/problems/FUM
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int N, ans = 1;
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            ans = (1LL * ans % MOD * i % MOD) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}