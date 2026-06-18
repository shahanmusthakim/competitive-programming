// https://cses.fi/problemset/task/1091
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    multiset<int> m;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        m.insert(x);
    }
    for (int i = 0; i < M; i++)
    {
        int t;
        cin >> t;

        if (t < *m.begin() || m.empty())
            cout << -1 << '\n';
        else
        {
            auto UB = m.upper_bound(t);
            UB--;
            cout << *UB << '\n';
            m.erase(UB);
        }
    }

    return 0;
}