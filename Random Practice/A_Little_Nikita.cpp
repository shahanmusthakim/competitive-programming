// https://codeforces.com/contest/1977/problem/A
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
        if (N < M)
        {
            cout << "No\n";
            continue;
        }
        if ((N - M) % 2 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}