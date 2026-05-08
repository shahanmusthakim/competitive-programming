//https://codeforces.com/problemset/problem/678/C
#include <bits/stdc++.h>
using namespace std;
long long LCM(long long A, long long B)
{
    return (A / __gcd(A, B)) * B;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N, A, B, P, Q;
    cin >> N >> A >> B >> P >> Q;
    long long X = (N / A) * P, Y = (N / B) * Q, overflow = (N / LCM(A, B));
    long long ans = (X + Y) - overflow * (P + Q) + (overflow * max(P, Q));
    cout << ans << endl;

    return 0;
}