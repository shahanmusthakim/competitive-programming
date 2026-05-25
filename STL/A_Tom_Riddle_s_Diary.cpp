// https://codeforces.com/problemset/problem/855/A
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
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}