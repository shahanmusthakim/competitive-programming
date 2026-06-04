// https://codeforces.com/problemset/problem/1742/E
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
        int N, Q, m = 0;
        cin >> N >> Q;
        vector<ll> v(N), pre(N), pre_max(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            if (v[i] > m)
                m = v[i];
            pre_max[i] = m;
        }
        pre[0] = v[0];
        for (int i = 1; i < N; i++)
        {
            pre[i] = v[i] + pre[i - 1];
        }
        for (int i = 0; i < Q; i++)
        {
            int x;
            cin >> x;
            auto it = upper_bound(pre_max.begin(), pre_max.end(), x);
            int idx = it - pre_max.begin();
            if (idx == 0)
                cout << 0 << ' ';
            else
                cout << pre[idx - 1] << " ";
        }
        cout << '\n';
    }

    return 0;
}