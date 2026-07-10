// https://codeforces.com/problemset/problem/2114/B
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
        int N, M;
        cin >> N >> M;
        string S;
        cin >> S;
        int zero = 0, one = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
                zero++;
            else
                one++;
        }

        int need = (N / 2) - M;

        (zero >= need && one >= need && (zero - need) % 2 == 0) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}