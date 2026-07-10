// http://codeforces.com/problemset/problem/2094/C
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
        map<int, int> m;
        vector<int> ans;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> v[i][j];
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (m.count(v[i][j]) == 0)
                {
                    ans.push_back(v[i][j]);
                }
                m[v[i][j]]++;
            }
        }
        int per;
        vector<int> tmp(ans.begin(), ans.end());
        sort(tmp.begin(), tmp.end());
        for (int i = 1; i <= N * 2; i++)
        {
            if (i != tmp[i - 1])
            {
                per = i;
                break;
            }
        }
        cout << per << " ";
        for (int x : ans)
            cout << x << " ";
        cout << '\n';
    }

    return 0;
}