// https://codeforces.com/problemset/problem/1468/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, pos = 1;
    cin >> T;
    set<pair<int, int>> s;
    vector<int> ans;
    multiset<pair<int, int>> m;
    while (T--)
    {
        int N;
        cin >> N;
        if (N == 1)
        {
            int am;
            cin >> am;
            s.insert({pos, am});
            m.insert({am, -pos});
            pos++;
        }
        else if (N == 2)
        {
            int p = s.begin()->first, mon = s.begin()->second;
            s.erase({p, mon});
            m.erase({mon, -p});
            ans.push_back(p);
        }
        else
        {
            int mon = m.rbegin()->first, p = m.rbegin()->second;
            s.erase({-p, mon});
            m.erase({mon, p});
            ans.push_back(-p);
        }
    }
    for (int i : ans)
        cout << i << " ";

    return 0;
}