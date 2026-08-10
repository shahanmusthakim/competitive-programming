// https://codeforces.com/problemset/problem/1999/C
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
        int N, S, M;
        cin >> N >> S >> M;
        bool ok = false;
        int time = 0;
        while (N--)
        {
            int x, y;
            cin >> x >> y;
            if (x - time >= S)
                ok = true;
            time = y;
        }
        if (M - time >= S)
            ok = true;
        (ok) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}