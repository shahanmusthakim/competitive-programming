//https://atcoder.jp/contests/abc172/tasks/abc172_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S, T;
    cin >> S >> T;
    int ans = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != T[i])
            ans++;
    }
    cout << ans;

    return 0;
}