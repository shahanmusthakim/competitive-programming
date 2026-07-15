// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int M, N;
    cin >> M >> N;
    vector<tuple<int, int, int>> a(N);
    for (int i = 0; i < N; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }
    vector<int> can(N);
    auto ok = [&](int mid)
    {
        vector<int> may(N);
        int has = M;
        for (int i = 0; i < N; i++)
        {
            tuple<int, int, int> T = a[i];
            int t, z, y, total, can, rem, curr;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);
            total = (t * z) + y;
            can = mid / total;
            rem = mid % total;
            curr = ((can * z) + min(z, (rem / t)));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }
        if (!has)
        {
            for (int i = 0; i < N; i++)
                can[i] = may[i];
        }
        return (!has);
    };
    int l = 0, r = 1e8, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    for (auto x : can)
    {
        cout << x << " ";
    }
    cout << '\n';

    return 0;
}