// https://codeforces.com/problemset/problem/474/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, hold = 0;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        hold += x;
        v.push_back(hold);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        int ans = it - v.begin();

        cout << ans + 1 << '\n';
    }

    return 0;
}