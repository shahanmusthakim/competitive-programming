// https://codeforces.com/problemset/problem/1618/C
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
        vector<long long> vec(N);
        for (int i = 0; i < N; i++)
            cin >> vec[i];
        long long G1 = 0, G2 = 0;
        bool ok = true;
        long long ans = 0;
        for (int i = 0; i < N; i += 2)
        {
            G1 = __gcd(G1, vec[i]);
        }
        for (int i = 1; i < N; i += 2)
        {
            G2 = __gcd(G2, vec[i]);
        }
        for (int i = 0; i < N; i += 2)
        {
            if (vec[i] % G2 == 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            ans = G2;
        else
        {
            ok = true;
            for (int i = 1; i < N; i += 2)
            {
                if (vec[i] % G1 == 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans = G1;
        }
        cout << ans << endl;
    }

    return 0;
}