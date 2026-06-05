// https://codeforces.com/problemset/problem/1980/A
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
        map<char, int> m;
        for (char i = 'A'; i <= 'G'; i++)
            m[i] = 0;
        int N, M;
        cin >> N >> M;
        string S;
        cin >> S;
        for (int i = 0; i < N; i++)
            m[S[i]]++;
        int ans = 0;
        for (auto x : m)
        {
            if (x.second < M)
            {
                ans += M - x.second;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}