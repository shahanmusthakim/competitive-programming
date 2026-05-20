//https://atcoder.jp/contests/abc125/tasks/abc125_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B, C;
    cin >> A >> B >> C;
    if (A > C)
        cout << 0;
    else
    {
        cout << (C / A) * B;
    }
    return 0;
}