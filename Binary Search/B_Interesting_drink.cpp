// https://codeforces.com/problemset/problem/706/B
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
    sort(v.begin(), v.end());
    int Q;
    cin >> Q;
    while (Q--)
    {
        int m;
        cin >> m;
        auto it = upper_bound(v.begin(), v.end(), m);
        cout << it - v.begin() << '\n';
    }

    return 0;
}