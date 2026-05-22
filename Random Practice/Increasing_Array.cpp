// https://cses.fi/problemset/task/1094/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<long long> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    long long pre = v[0], ans = 0;
    for (int i = 1; i < N; i++)
    {
        if (v[i] < pre)
        {
            long long move = pre - v[i];
            ans += move;
            v[i] += move;
        }
        pre = v[i];
    }
    cout << ans;

    return 0;
}