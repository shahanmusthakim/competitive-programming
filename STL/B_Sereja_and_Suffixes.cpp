//https://codeforces.com/problemset/problem/368/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, Q;
    cin >> N >> Q;
    vector<int> v(N), ans(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    set<int> s;
    for (int i = N - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        ans[i] = s.size();
    }
    for (int i = 0; i < Q; i++)
    {
        int pos;
        cin >> pos;
        cout << ans[pos - 1] << '\n';
    }

    return 0;
}