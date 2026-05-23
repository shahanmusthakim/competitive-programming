//https://www.codechef.com/problems/MAXHAMDIST
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll N, M;
        cin >> N >> M;
        vector<string> v(M);

        for (int j = 0; j < M; j++)
        {
            cin >> v[j];
        }
        ll ans = 0;
        for (int i = 0; i < N; i++)
        {
            ll cnt_1 = 0, cnt_0 = 0, cnt_q = 0;
            for (int j = 0; j < M; j++)
            {

                if (v[j][i] == '1')
                    cnt_1++;
                else if (v[j][i] == '0')
                    cnt_0++;
                else
                    cnt_q++;
            }
            while (cnt_q > 0)
            {
                if (cnt_0 < cnt_1)
                    cnt_0++;
                else
                    cnt_1++;
                cnt_q--;
            }
            ans += cnt_0 * cnt_1;
        }
        cout << ans << "\n";
    }

    return 0;
}