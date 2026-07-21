// https://codeforces.com/problemset/problem/1851/C
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
        vector<int> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i];
        if (v[0] == v[N - 1])
        {
            int cnt = count(v.begin(), v.end(), v[0]);
            (cnt >= M) ? cout << "YES\n" : cout << "NO\n";
        }
        else
        {
            int L = N, cnt_L = 1;
            if (cnt_L == M)
                L = 0;
            else
            {
                for (int i = 1; i < N; i++)
                {
                    if (v[i] == v[0])
                        cnt_L++;
                    if (cnt_L == M)
                    {
                        L = i;
                        break;
                    }
                }
            }

            int R = -1, cnt_R = 1;
            if (cnt_R == M)
                R = N - 1;
            else
            {
                for (int i = N - 2; i >= 0; i--)
                {
                    if (v[i] == v[N - 1])
                        cnt_R++;
                    if (cnt_R == M)
                    {
                        R = i;
                        break;
                    }
                }
            }

            (cnt_L == M && cnt_R == M && L < R) ? cout << "YES\n" : cout << "NO\n";
        }
    }

    return 0;
}