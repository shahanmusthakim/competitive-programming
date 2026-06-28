// https://codeforces.com/problemset/problem/1843/B
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
        vector<int> v(N + 1);
        for (int i = 1; i <= N; i++)
            cin >> v[i];
        long long ans = 0, step = 0;
        bool ok = true;
        int i = 1;
        while (i <= N)
        {
            ans += abs(v[i]);
            if (ok && v[i] < 0)
            {
                step++;
                ok = false;
            }
            if (!ok && v[i] > 0)
                ok = true;
            i++;
        }
        cout << ans << " " << step << '\n';
    }

    return 0;
}