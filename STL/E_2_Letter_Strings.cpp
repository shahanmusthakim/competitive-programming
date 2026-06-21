// https://codeforces.com/problemset/problem/1669/E
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
        map<string, int> m;
        vector<int> L(11, 0), R(11, 0);
        long long ans = 0;
        for (int i = 0; i < N; i++)
        {
            string S;
            cin >> S;
            int tmp1 = S[0] - 'a';
            int tmp2 = S[1] - 'a';
            ans += (L[tmp1] - m[S]);
            ans += (R[tmp2] - m[S]);
            m[S]++;
            L[tmp1]++;
            R[tmp2]++;
        }
        cout << ans << '\n';
    }

    return 0;
}