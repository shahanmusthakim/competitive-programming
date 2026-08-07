// https://codeforces.com/problemset/problem/1669/H
#include <bits/stdc++.h>
using namespace std;
const int B = 30;
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
        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        vector<int> bits(B + 1);
        for (int i = 0; i < N; i++)
        {
            for (int j = B; j >= 0; j--)
            {
                if ((v[i] >> j) & 1)
                {
                    bits[j]++;
                }
            }
        }

        long long ans = 0;
        for (int i = B; i >= 0; i--)
        {
            if (bits[i] == N)
            {
                ans += (1LL << i);
            }
            else
            {
                int need = N - bits[i];
                if (need <= K)
                {
                    ans += (1LL << i);
                    K -= need;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}