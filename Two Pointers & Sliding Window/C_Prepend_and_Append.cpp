// https://codeforces.com/problemset/problem/1791/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int ans = N, i = 0, j = N - 1;
        while (i < j)
        {
            if (S[i] != S[j])
            {
                ans -= 2;
                i++;
                j--;
            }
            else
                break;
        }
        cout << ans << '\n';
    }

    return 0;
}