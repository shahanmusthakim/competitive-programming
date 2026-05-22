//https://atcoder.jp/contests/abc214/tasks/abc214_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int S, T;
    cin >> S >> T;
    int ans = 0;
    for (int i = 0; i <= S; i++)
    {
        for (int j = 0; j <= S; j++)
        {
            for (int k = 0; k <= S; k++)
            {
                if ((i + j + k) <= S && (i * j * k) <= T)
                    ans++;
            }
        }
    }
    cout << ans;

    return 0;
}