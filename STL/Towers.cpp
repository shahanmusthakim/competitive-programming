// https://cses.fi/problemset/task/1073
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    multiset<int> m;
    for (int i = 0; i < N; i++)
    {
        auto it = m.upper_bound(v[i]);
        if (it != m.end())
        {
            m.erase(it);
        }
        m.insert(v[i]);
    }
    cout << m.size();

    return 0;
}