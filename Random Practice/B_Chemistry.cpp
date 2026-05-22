// https://codeforces.com/problemset/problem/1883/B
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
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
        map<char, int> m;
        for (int i = 0; i < N; i++)
        {
            m[S[i]]++;
        }
        int pair = 0, no = 0;
        for (auto x : m)
        {
            if (x.second % 2 == 0)
            {
                pair += x.second / 2;
            }
            else
            {
                pair += x.second / 2;
                no++;
            }
        }

        if (K >= no - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}