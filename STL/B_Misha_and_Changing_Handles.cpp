// https://codeforces.com/problemset/problem/501/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    map<string, string> m;
    for (int i = 0; i < N; i++)
    {
        string S, T;
        cin >> S >> T;
        bool ok = false;
        for (auto &X : m)
        {
            if (X.second == S)
            {
                X.second = T;
                ok = true;
            }
        }
        if (!ok)
            m[S] = T;
    }
    cout << m.size() << '\n';
    for (auto x : m)
    {
        cout << x.first << " " << x.second << '\n';
    }

    return 0;
}