//https://codeforces.com/problemset/problem/1792/A
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
        int one = 0, ans = 0;
        for (int i = 0; i < N; i++)
        {
            if (v[i] == 1)
                one++;
            else
                ans++;
        }
        ans += ceil((float)one / 2);
        cout << ans << endl;
    }
    return 0;
}