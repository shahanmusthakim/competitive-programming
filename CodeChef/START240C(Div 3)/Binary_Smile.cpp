// https://www.codechef.com/START240C/problems/RVBS
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
        string S, T;
        cin >> S >> T;
        if (S == T)
        {
            cout << 0 << '\n';
            continue;
        }
        vector<int> v1, v2;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '1')
                v1.push_back(i);
            if (T[i] == '1')
                v2.push_back(i);
        }
        if (v1.size() != v2.size())
        {
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] != v2[i])
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
