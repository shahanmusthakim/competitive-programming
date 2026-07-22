// https://codeforces.com/problemset/problem/762/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N, K;
    cin >> N >> K;
    vector<ll> v;
    for (ll i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            v.push_back(i);
            if (N / i != i)
                v.push_back(N / i);
        }
    }
    sort(v.begin(), v.end());
    if (v.size() < K)
        cout << -1 << '\n';
    else
        cout << v[K - 1];

    return 0;
}