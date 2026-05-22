//https://codeforces.com/problemset/problem/1831/A
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
        for (int i = 0; i < N; i++)
            cin >> v[i];
        int tmp = N + 1;
        for (int i = 0; i < N; i++)
        {
            cout << tmp - v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}