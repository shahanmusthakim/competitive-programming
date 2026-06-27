// https://codeforces.com/problemset/problem/1690/D
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
        int i = 0, j = 0, cnt = 0, ans = INT_MAX;
        while (j < N)
        {
            if (S[j] == 'W')
                cnt++;
            if (j - i + 1 == M)
            {
                ans = min(cnt, ans);
                if (S[i] == 'W')
                    cnt--;
                i++;
            }
            j++;
        }
        cout << ans << '\n';
    }

    return 0;
}