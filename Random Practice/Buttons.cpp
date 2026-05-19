// https://atcoder.jp/contests/abc124/tasks/abc124_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B;
    cin >> A >> B;
    int mx = max(A, B);
    int mn = min(A, B);
    int ans = mx--;
    ans += max(mx, mn);
    cout << ans;

    return 0;
}