// https://codeforces.com/problemset/problem/2000/C
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
        vector<int> v(N);
        map<char, int> m;
        map<int, char> m2;
        for (int i = 0; i < N; i++)
            cin >> v[i];
        int Q;
        cin >> Q;
        while (Q--)
        {
            string S;
            cin >> S;
            if (S.size() != N)
                cout << "NO\n";
            else
            {
                bool ok = true;
                for (int i = 0; i < N; i++)
                {
                    if (m.find(S[i]) != m.end())
                    {
                        if (m[S[i]] != v[i])
                        {
                            ok = false;
                            break;
                        }
                    }
                    else
                    {
                        m[S[i]] = v[i];
                    }
                }

                for (int i = 0; i < N; i++)
                {
                    if (m2.find(v[i]) != m2.end())
                    {
                        if (m2[v[i]] != S[i])
                        {
                            ok = false;
                            break;
                        }
                    }
                    else
                    {
                        m2[v[i]] = S[i];
                    }
                }
                (ok) ? cout << "YES\n" : cout << "NO\n";
            }
            m.clear();
            m2.clear();
        }
    }

    return 0;
}