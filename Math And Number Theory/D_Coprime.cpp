// https://codeforces.com/problemset/problem/1742/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> pairs[1001];
    for (int i = 1; i < 1001; i++)
    {
        for (int j = 1; j < 1001; j++)
        {
            if (__gcd(i, j) == 1)
            {
                pairs[i].push_back(j);
            }
        }
    }
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int ans = -1;
        vector<int> v(1001, -1);
        for (int i = 1; i <= N; i++)
        {
            int val;
            cin >> val;
            v[val] = i;
        }

        for (int i = 1; i < 1001; i++)
        {
            if (v[i] != -1)
            {
                for (int j : pairs[i])
                {
                    if (v[j] != -1)
                    {
                        ans = max(ans, (v[i] + v[j]));
                    }
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}