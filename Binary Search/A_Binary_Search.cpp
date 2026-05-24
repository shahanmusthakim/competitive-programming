//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, T;
    cin >> N >> T;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    for (int i = 0; i < T; i++)
    {
        int X;
        cin >> X;
        int L = 0, R = N - 1;
        bool ok = false;
        while (L <= R)
        {
            int mid = (L + R) / 2;
            if (X == v[mid])
            {
                ok = true;
                break;
            }
            else if (X < v[mid])
                R = mid - 1;
            else
                L = mid + 1;
        }
        (ok) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}