// https://codeforces.com/problemset/problem/2191/A
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
        vector<pair<int, char>> p;
        for (int i = 0; i < N; i++)
            cin >> v[i];
        char a = 'r';
        for (int i = 0; i < N; i++)
        {
            p.push_back({v[i], a});
            if (a == 'r')
                a = 'b';
            else
                a = 'r';
        }
        sort(p.begin(), p.end());
        bool ok = true;
        for (int i = 1; i < N; i++)
        {
            if (p[i].second == p[i - 1].second)
            {
                ok = false;
                break;
            }
        }
        (ok) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}