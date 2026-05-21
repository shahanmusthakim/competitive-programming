//https://codeforces.com/problemset/problem/862/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, X;
    cin >> N >> X;
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    int ans = 0;
    for (int i = 0; i < X; i++)
    {
        if (s.find(i) == s.end())
            ans++;
    }
    if (s.find(X) != s.end())
        ans++;
    cout << ans;

    return 0;
}