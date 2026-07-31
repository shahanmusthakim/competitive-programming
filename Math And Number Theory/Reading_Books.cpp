// https://cses.fi/problemset/task/1631/
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
    long long mx = *max_element(v.begin(), v.end());
    long long sum_without_mx = accumulate(v.begin(), v.end(), 0LL) - mx;
    if (sum_without_mx <= mx)
        cout << mx * 2;
    else
        cout << accumulate(v.begin(), v.end(), 0LL);

    return 0;
}