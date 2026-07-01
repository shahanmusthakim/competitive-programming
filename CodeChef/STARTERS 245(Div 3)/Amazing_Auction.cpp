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
        int n, k;
        cin >> n >> k;
        vector<long long> a(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        long long mx = -2e18;
        for (int j = 0; j < n; j++)
        {
            long long v = a[j];
            vector<long long> cst(n);
            for (int i = 0; i < n; i++)
            {
                cst[i] = max(0LL, v - a[i]) * c[i];
            }
            sort(cst.begin(), cst.end());
            long long curr = 0;
            for (int i = 0; i <= k; i++)
            {
                curr += cst[i];
            }
            long long pro = k * v - curr;
            if (pro > mx)
            {
                mx = pro;
            }
        }
        cout << mx << "\n";
    }
    return 0;
}