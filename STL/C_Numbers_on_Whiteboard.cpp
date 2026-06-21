// https://codeforces.com/problemset/problem/1430/C
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
        multiset<int> m;
        vector<pair<int, int>> v;
        for (int i = 1; i <= N; i++)
        {
            m.insert(i);
        }
        while (m.size() > 1)
        {
            int b = *prev(m.end());
            m.erase(prev(m.end()));
            int a = *prev(m.end());
            m.erase(prev(m.end()));
            m.insert((a + b + 1) / 2);
            v.push_back({a, b});
        }
        cout << *m.begin() << '\n';
        for (auto x : v)
        {
            cout << x.first << " " << x.second << '\n';
        }
    }

    return 0;
}