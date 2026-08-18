// https://www.codechef.com/problems/MINMXOR
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
        int total = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            total ^= v[i];
        }
        int ans = total;
        for (int i = 0; i < N; i++)
        {
            ans = min(ans, total ^ v[i]);
        }
        cout << ans << '\n';
    }

    return 0;
}