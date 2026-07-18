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
        int N, M;
        cin >> N >> M;
        string S;
        cin >> S;
        map<char, int> m;
        for (int i = 0; i < N; i++)
        {
            m[S[i]]++;
        }
        int ans = 0;
        for (char i = 'A'; i <= 'G'; i++)
        {
            if (m[i] < M)
            {
                ans += M - m[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}