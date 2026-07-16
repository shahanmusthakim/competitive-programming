// https://codeforces.com/problemset/problem/1352/C
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
        auto ok = [&](int mid)
        {
            return (mid - (mid / N)) >= K;
        };
        int i = 0, j = 2e9, mid, ans = 0;
        while (i <= j)
        {
            mid = i + (j - i) / 2;
            if (ok(mid))
            {
                ans = mid;
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}