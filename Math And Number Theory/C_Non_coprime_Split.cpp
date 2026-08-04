// https://codeforces.com/problemset/problem/1872/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll small_prime(ll x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return i;
    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll A, B;
        cin >> A >> B;
        if (B <= 3)
            cout << -1 << '\n';
        else
        {
            if (A < B)
            {
                if (B % 2 != 0)
                    B--;
                cout << 2 << " " << B - 2 << '\n';
            }
            else
            {
                ll prime = small_prime(B);
                if (prime == A)
                    cout << -1 << '\n';
                else
                {
                    cout << prime << " " << A - prime << '\n';
                }
            }
        }
    }

    return 0;
}