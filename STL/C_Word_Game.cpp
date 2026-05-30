//https://codeforces.com/problemset/problem/1722/C
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
        vector<string> A(N), B(N), C(N);
        unordered_map<string, int> m;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            m[A[i]]++;
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
            m[B[i]]++;
        }
        for (int i = 0; i < N; i++)
        {
            cin >> C[i];
            m[C[i]]++;
        }
        int ans_1 = 0, ans_2 = 0, ans_3 = 0;
        for (int i = 0; i < N; i++)
        {
            if (m[A[i]] == 1)
                ans_1 += 3;
            else if (m[A[i]] == 2)
                ans_1 += 1;
        }
        for (int i = 0; i < N; i++)
        {
            if (m[B[i]] == 1)
                ans_2 += 3;
            else if (m[B[i]] == 2)
                ans_2 += 1;
        }
        for (int i = 0; i < N; i++)
        {
            if (m[C[i]] == 1)
                ans_3 += 3;
            else if (m[C[i]] == 2)
                ans_3 += 1;
        }
        cout << ans_1 << " " << ans_2 << " " << ans_3 << '\n';
    }

    return 0;
}