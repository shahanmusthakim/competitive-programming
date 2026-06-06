// https://codeforces.com/problemset/problem/2200/B
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
        vector<int> v(N), tmp(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            tmp[i] = v[i];
        }
        sort(tmp.begin(), tmp.end());
        if (tmp == v)
            cout << N << '\n';
        else
            cout << 1 << '\n';
    }

    return 0;
}