// https://codeforces.com/problemset/problem/1979/A
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
        {
            cin >> v[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < N - 1; ++i)
        {
            int tmp = max(v[i], v[i + 1]);
            ans = min(tmp, ans);
        }
        cout << ans - 1 << '\n';
    }

    return 0;
}