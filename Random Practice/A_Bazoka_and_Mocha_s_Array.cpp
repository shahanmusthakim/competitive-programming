// https://codeforces.com/problemset/problem/1975/A
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
        {
            cin >> v[i];
        }
        int cnt = 0;
        for (int i = 0; i < N - 1; i++)
        {
            if (v[i] > v[i + 1])
                cnt++;
        }
        if (cnt == 0)
            cout << "Yes\n";
        else if (cnt == 1 && v[0] >= v[N - 1])
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }

    return 0;
}