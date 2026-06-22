// https://codeforces.com/problemset/problem/1793/C
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
        vector<int> v(N + 1);
        for (int i = 1; i <= N; i++)
            cin >> v[i];
        int L = 1, R = N;
        int mn = 1, mx = N;
        bool ok = false;
        while (L < R)
        {
            if (v[L] == mx)
            {
                L++;
                mx--;
            }
            else if (v[L] == mn)
            {
                L++;
                mn++;
            }
            else if (v[R] == mx)
            {
                R--;
                mx--;
            }
            else if (v[R] == mn)
            {
                R--;
                mn++;
            }
            else
            {
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << -1 << endl;
        else
            cout << L << " " << R << endl;
    }

    return 0;
}