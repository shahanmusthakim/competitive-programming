// https://www.codechef.com/problems/WAIT1
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
        vector<long long> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i];
        long long ans = 0, mx = v[0];
        for (int i = 1; i < N; i++)
        {
            mx = max(mx, v[i]);
            ans += mx - v[i];
        }
        cout << ans << '\n';
    }

    return 0;
}