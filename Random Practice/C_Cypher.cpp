// https://codeforces.com/problemset/problem/1703/C
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
        for (int k = 0; k < N; k++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            for (int i = 0; i < x; i++)
            {
                if (s[i] == 'D')
                {
                    if (v[k] == 9)
                        v[k] = 0;
                    else
                        v[k]++;
                }
                else
                {
                    if (v[k] == 0)
                        v[k] = 9;
                    else
                        v[k]--;
                }
            }
        }
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}