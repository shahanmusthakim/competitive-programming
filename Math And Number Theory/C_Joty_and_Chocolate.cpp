// https://codeforces.com/problemset/problem/678/C
#include <bits/stdc++.h>
using namespace std;
long long LCM(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N, A, B, P, Q;
    cin >> N >> A >> B >> P >> Q;
    long long first = (N / A) * P, last = (N / B) * Q, over = (N / LCM(A, B));
    long long ans = ((first + last) - over * (P + Q)) + (over * max(P, Q));
    cout << ans;
    return 0;
}