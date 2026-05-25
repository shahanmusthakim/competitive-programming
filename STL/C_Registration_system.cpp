// https://codeforces.com/problemset/problem/4/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    map<string, int> m;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        m[S]++;
        if (m[S] == 1)
            cout << "OK\n";
        else
            cout << S << m[S] - 1 << '\n';
    }

    return 0;
}