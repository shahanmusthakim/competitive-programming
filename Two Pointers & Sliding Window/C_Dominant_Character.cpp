//https://codeforces.com/problemset/problem/1605/C
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

        int ans = -1;

        for (int i = 0; i < N; i++)
        {
            if (i + 1 < N && S[i] == 'a' && S[i + 1] == 'a')
            {
                ans = 2;
                break;
            }
        }

        if (ans == -1)
        {
            for (int i = 0; i < N; i++)
            {
                if (i + 2 < N && S[i] == 'a' && S[i + 2] == 'a')
                {
                    ans = 3;
                    break;
                }
            }
        }

        if (ans == -1)
        {
            for (int i = 0; i < N; i++)
            {
                if (i + 3 < N && S[i] == 'a' && S[i + 3] == 'a' && S[i + 1] != S[i + 2])
                {
                    ans = 4;
                    break;
                }
            }
        }

        if (ans == -1)
        {
            for (int i = 0; i < N; i++)
            {
                if (i + 6 < N && S[i] == 'a' && S[i + 3] == 'a' && S[i + 6] == 'a' && S[i + 1] != S[i + 4])
                {
                    ans = 7;
                    break;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}