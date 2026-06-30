// https://codeforces.com/problemset/problem/1807/D
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
        int N, Q;
        cin >> N >> Q;
        vector<int> v(N + 1), pre(N + 1, 0);
        for (int i = 1; i <= N; i++)
            cin >> v[i];
        pre[1] = v[1];
        for (int i = 2; i <= N; i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }
        while (Q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int start = pre[l - 1];
            int end = pre[N] - pre[r];
            long long tmp = (long long)start + end;
            long long ans = tmp + ((r - l + 1) * k);
            if (ans % 2 == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}