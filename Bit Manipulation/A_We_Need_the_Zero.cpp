// https://codeforces.com/problemset/problem/1805/A
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
        int total_xor = 0;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            total_xor ^= x;
        }
        if (N % 2 != 0)
            cout << total_xor << "\n";
        else
        {
            if (total_xor == 0)
                cout << "0\n";
            else
                cout << "-1\n";
        }
    }

    return 0;
}