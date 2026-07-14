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
        vector<long long> v(N), pre(N + 1);
        for (int i = 0; i < N; i++)
            cin >> v[i];
        for (int i = 0; i < N; ++i)
        {
            pre[i + 1] = v[i] + pre[i];
        }
        string S;
        cin >> S;
        int l = 0, r = N - 1;
        long long ans = 0;
        while (l < r)
        {
            if (S[l] == 'L' && S[r] == 'R')
            {
                ans += pre[r + 1] - pre[l];
                l++;
                r--;
            }
            else if (S[l] != 'L')
            {
                l++;
            }
            else if (S[r] != 'R')
            {
                r--;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}