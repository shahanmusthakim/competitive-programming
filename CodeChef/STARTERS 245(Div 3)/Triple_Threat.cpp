#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> cnt(n, 0);
        if (x <= n)
        {
            for (int i = n - 1; i >= n - x; i--)
            {
                cnt[i] = 1;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cnt[i] = 1;
            }
            int rem = x - n;
            for (int i = n - 1; i >= 0 && rem > 0; i--)
            {
                int add = min(rem, 2);
                cnt[i] += add;
                rem -= add;
            }
        }
        string a1(n, '0'), a2(n, '0'), a3(n, '0');
        for (int i = 0; i < n; i++)
        {
            if (cnt[i] >= 1)
                a3[i] = '1';
            if (cnt[i] >= 2)
                a2[i] = '1';
            if (cnt[i] >= 3)
                a1[i] = '1';
        }
        cout << a1 << a2 << a3 << "\n";
    }
    return 0;
}