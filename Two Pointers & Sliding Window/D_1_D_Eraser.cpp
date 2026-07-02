// https://codeforces.com/problemset/problem/1873/D
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
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
        int ans = 0, i = 0, j = 0;
        while (i < N)
        {
            if (S[i] == 'B' && j == 0)
            {
                ans++;
                j++;
            }
            else if (j != 0)
            {
                j++;
            }
            if (j == K)
                j = 0;
            i++;
        }
        cout << ans << '\n';
    }

    return 0;
}