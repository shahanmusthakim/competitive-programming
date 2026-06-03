// https://codeforces.com/problemset/problem/1165/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    multiset<int> m;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        m.insert(x);
    }
    int ans = 0;
    for (int i = 1;; i++)
    {
        auto it = m.lower_bound(i);
        if (it == m.end())
            break;
        else
        {
            m.erase(it);
            ans++;
        }
    }
    cout << ans << '\n';

    return 0;
}