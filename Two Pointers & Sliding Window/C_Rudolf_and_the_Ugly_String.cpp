// https://codeforces.com/problemset/problem/1941/C
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
        string target = "mapie";
        auto pos = S.find(target);
        int tmp = 0;
        while (pos != string ::npos)
        {
            tmp++;
            pos = S.find(target, pos + 1);
        }

        int cnt = 0;
        for (int i = 0; i < N - 2; i++)
        {
            if (S[i] == 'm' && S[i + 1] == 'a' && S[i + 2] == 'p' || S[i] == 'p' && S[i + 1] == 'i' && S[i + 2] == 'e')
            {
                cnt++;
            }
        }
        cout << cnt - tmp << '\n';
    }

    return 0;
}