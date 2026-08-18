//https://www.codechef.com/problems/XORSMALL
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
        int ans = v[0];
        for (int i = 1; i < N; i++)
            ans &= v[i];
        cout << ans << '\n';
    }

    return 0;
}