// https://codeforces.com/problemset/problem/2185/C
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
        set<int> s;
        vector<int> v;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int cnt = 1, ans = 1;
        for (auto x : s)
        {
            v.push_back(x);
        }
        if (v.size() == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i + 1] - v[i] == 1)
            {
                cnt++;
                ans = max(ans, cnt);
            }
            else
            {
                cnt = 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}