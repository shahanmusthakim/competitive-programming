// https://codeforces.com/problemset/problem/2000/D
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
        vector<long long> v(N + 1), pref(N + 1, 0);

        for (int i = 1; i <= N; i++)
            cin >> v[i];
        string S;
        cin >> S;
        for (int i = 1; i <= N; ++i)
        {
            pref[i] = pref[i - 1] + v[i];
        }
        int i = 0, j = N - 1;
        long long ans = 0;
        while (i < j)
        {
            if (S[i] == 'L' && S[j] == 'R')
            {
                ans += (pref[j + 1] - pref[i]);
                i++;
                j--;
            }
            else
            {
                if (S[i] != 'L')
                    i++;
                else if (S[j] != 'R')
                    j--;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}