// https://codeforces.com/problemset/problem/1702/C
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
        map<int, set<int>> m;
        for (int i = 1; i <= N; i++)
        {
            int x;
            cin >> x;
            m[x].insert(i);
        }
        for (int i = 0; i < Q; i++)
        {
            int l, r;
            cin >> l >> r;
            if ((m.find(l) == m.end()) || (m.find(r) == m.end()))
                cout << "NO\n";
            else
            {
                int starting = *m[l].begin();
                int ending = *m[r].rbegin();
                if (starting <= ending)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }

    return 0;
}