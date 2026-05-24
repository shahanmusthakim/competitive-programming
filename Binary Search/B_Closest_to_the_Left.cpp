//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin >> N >> K;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    for (int i = 0; i < K; i++)
    {
        int X;
        cin >> X;
        int L = 0, R = N - 1;
        int ans = -1;
        while (L <= R)
        {
            int mid = (L + R) / 2;
            if (X >= v[mid])
            {
                L = mid + 1;
                ans = mid;
            }
            else
                R = mid - 1;
        }
        cout << ans + 1 << "\n";
    }

    return 0;
}