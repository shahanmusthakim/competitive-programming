//https://www.codechef.com/problems/MAXEQEASY
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
        vector<int> v;
        map<int, int> m;
        for (int i = 0; i < N; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
            m[val]++;
        }
        int mn = -1, mf = 0;
        for (auto x : m)
        {

            if (x.second >= mf && x.first != 0)
            {
                mn = x.first;
                mf = x.second;
            }
        }
        if (mn == -1)
            mn = 1;
        for (int i = 0; i < N; i++)
        {
            if (v[i] == 0)
                v[i] = mn;
        }

        int ans = 0;
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (v[i] == v[j])
                    ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}