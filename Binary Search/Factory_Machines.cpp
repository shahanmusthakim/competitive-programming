// https://cses.fi/problemset/task/1620
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](long long sec)
    {
        long long cnt = 0;
        for (int i = 0; i < N; i++)
        {
            cnt += sec / v[i];
            if (cnt >= M)
            {
                return true;
            }
        }
        return false;
    };
    long long l = 1, r = 1e18, ans = 0;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans;

    return 0;
}