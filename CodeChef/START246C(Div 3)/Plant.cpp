// https://www.codechef.com/problems/TEMPPLANT
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
        int N;

        cin >> N;
        vector<int> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i];
        int ans = 0;
        for (int i = 1; i < N; i++)
        {
            int mn = min(v[i - 1], v[i]);
            ans = max(ans, mn);
        }
        cout << ans << '\n';
    }

    return 0;
}