// https://codeforces.com/problemset/problem/735/D
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int N)
{
    if (N == 1)
        return false;
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
    int N;
    cin >> N;
    if (isPrime(N))
        cout << 1 << endl;
    else if (N % 2 == 0)
        cout << 2 << endl;
    else
    {
        if (isPrime(N - 2))
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}