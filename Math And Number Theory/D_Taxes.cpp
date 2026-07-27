// https://codeforces.com/problemset/problem/735/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(ll N)
{
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
    cin >> N;
    if (ok(N))
        cout << 1;
    else if (N % 2 == 0)
        cout << 2;
    else
    {
        if (ok(N - 2))
            cout << 2;
        else
            cout << 3;
    }

    return 0;
}