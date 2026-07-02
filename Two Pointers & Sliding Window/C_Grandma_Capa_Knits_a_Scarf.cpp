// https://codeforces.com/problemset/problem/1582/C
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
        int N;
        cin >> N;
        string S;
        cin >> S;
        int ans = 2e5;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int i = 0, j = N - 1, cnt = 0;
            bool ok = true;
            while (i < j)
            {
                if (S[i] == S[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    if (S[i] == c)
                    {
                        cnt++;
                        i++;
                    }
                    else if (S[j] == c)
                    {
                        j--;
                        cnt++;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
                ans = min(ans, cnt);
        }
        if (ans == (int)2e5)
            ans = -1;
        cout << ans << '\n';
    }

    return 0;
}