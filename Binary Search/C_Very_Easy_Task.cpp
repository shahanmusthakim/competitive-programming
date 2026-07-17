// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N, X, Y;
    cin >> N >> X >> Y;
    ll ans = min(X, Y);
    if (N == 1)
    {
        cout << ans;
    }
    else
    {
        ll i = 0, j = max(X, Y) * N, cnt;
        while (i <= j)
        {
            ll mid = i + (j - i) / 2;
            if ((mid / X) + (mid / Y) >= (N - 1))
            {
                cnt = mid;
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        cout << cnt + ans;
    }

    return 0;
}