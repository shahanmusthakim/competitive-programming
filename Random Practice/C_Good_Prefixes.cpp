// https://codeforces.com/problemset/problem/1985/C
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
        vector<long long> v(N + 1), prefix(N + 1, 0), mx(N + 1, 0);
        for (int i = 1; i <= N; i++)
            cin >> v[i];

        for (int i = 1; i <= N; i++)
        {
            prefix[i] = prefix[i - 1] + v[i];
        }

        for (int i = 1; i <= N; i++)
        {
            mx[i] = max(mx[i - 1], v[i]);
        }
        int ans = 0;
        for (int i = 1; i <= N; i++)
        {
            long long num = mx[i], sum = prefix[i];
            if (2 * num == sum)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}