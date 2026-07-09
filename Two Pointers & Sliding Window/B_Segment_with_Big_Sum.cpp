// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N, M;
    cin >> N >> M;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    long long ans = INT_MAX, cnt = 0;
    long long i = 0, j = 0;
    while (j < N)
    {
        cnt += v[j];
        if (cnt >= M)
        {
            while (cnt >= M)
            {
                ans = min(ans, j - i + 1);
                cnt -= v[i];
                i++;
            }
        }
        j++;
    }
    if (ans == INT_MAX)
        cout << "-1";
    else
        cout << ans;

    return 0;
}