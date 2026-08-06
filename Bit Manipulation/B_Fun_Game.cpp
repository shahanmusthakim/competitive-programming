// https://codeforces.com/problemset/problem/1994/B
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
        string S, T;
        cin >> S >> T;
        if (S == T)
        {
            cout << "YES\n";
            continue;
        }
        int pos = -1;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '1')
            {
                pos = i;
                break;
            }
        }
        if (pos == -1)
        {
            cout << "NO\n";
            continue;
        }
        bool ok = true;
        for (int i = 0; i < N; i++)
        {
            if (S[i] != T[i])
            {
                if (i < pos)
                {
                    cout << "NO\n";
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
            cout << "YES\n";
    }

    return 0;
}