// https://codeforces.com/problemset/problem/2005/B2
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
        int N, M, Q;
        cin >> N >> M >> Q;
        vector<int> v(M);
        for (int i = 0; i < M; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        for (int i = 0; i < Q; i++)
        {
            int x;
            cin >> x;
            if (x < v[0])
                cout << (v[0] - 1) << '\n';
            else if (x > v.back())
                cout << N - v.back() << '\n';
            else
            {
                auto post = lower_bound(v.begin(), v.end(), x);
                if (*post == x)
                    cout << 0 << '\n';
                else
                {
                    auto pre = prev(post);
                    int ans = (*post - *pre) / 2;
                    cout << ans << '\n';
                }
            }
        }
    }

    return 0;
}