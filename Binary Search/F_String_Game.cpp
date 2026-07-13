//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S, T;
    cin >> S >> T;
    int N = S.size(), M = T.size();
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    auto ok = [&](int mid)
    {
        vector<bool> extra(N + 1);
        for (int i = 0; i < mid; i++)
        {
            extra[v[i]] = true;
        }
        int j = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == T[j] && !extra[i + 1])
            {
                j++;
            }
        }
        if (j == M)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    int l = 0, r = N, ans = 0, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;

    return 0;
}