// https://www.codechef.com/problems/BUDGET25
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
        int N, K;
        cin >> N >> K;
        vector<int> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());
        ll tmp = 0, ans = 0;
        for (int i = 0; i < N; i++)
        {
            if (v[i] >= K)
            {
                ans++;
                tmp += (v[i] - K);
            }
            else
            {
                ll need = (K - v[i]);
                if (tmp >= need)
                {
                    tmp -= need;
                    ans++;
                }
                else
                    break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}