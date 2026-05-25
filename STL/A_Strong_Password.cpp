// https://codeforces.com/problemset/problem/1997/A
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
        string S;
        cin >> S;
        bool ok = false;
        for (int i = 1; i < S.size(); i++)
        {
            if (S[i] == S[i - 1])
            {
                if (S[i] == 'a')
                {
                    S.insert(S.begin() + i, 'b');
                    ok = true;
                    break;
                }
                else
                {
                    S.insert(S.begin() + i, 'a');
                    ok = true;
                    break;
                }
            }
        }
        if (!ok)
        {
            if (S.back() == 'a')
                S.push_back('b');
            else
                S.push_back('a');
        }

        cout << S << '\n';
    }

    return 0;
}