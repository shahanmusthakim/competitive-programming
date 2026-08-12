// https://codeforces.com/problemset/problem/1705/B
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
        bool ok = false;
        long long ans = 0;
        for (int i = 0; i < N - 1; i++)
        {
            if (v[i] != 0)
            {
                ok = true;
            }
            if (ok)
            {
                if (v[i] == 0)
                    ans++;
                else
                    ans += v[i];
            }
        }
        cout << ans << '\n';
    }

    return 0;
}