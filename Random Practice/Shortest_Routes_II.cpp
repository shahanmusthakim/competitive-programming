//https://cses.fi/problemset/result/19120245/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, Q;
    cin >> N >> M >> Q;
    ll arr[N + 5][N + 5];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == j)
                arr[i][j] = 0;
            else
                arr[i][j] = LLONG_MAX;
        }
    }
    while (M--)
    {
        ll A, B, C;
        cin >> A >> B >> C;
        arr[A][B] = min(arr[A][B], C);
        arr[B][A] = min(arr[B][A], C);
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            for (int k = 1; k <= N; k++)
            {
                if (arr[j][i] != LLONG_MAX && arr[i][k] != LLONG_MAX && arr[j][i] + arr[i][k] < arr[j][k])
                {
                    arr[j][k] = arr[j][i] + arr[i][k];
                }
            }
        }
    }
    while (Q--)
    {
        int A, B;
        cin >> A >> B;
        if (arr[A][B] == LLONG_MAX)
            cout << -1 << '\n';
        else
            cout << arr[A][B] << '\n';
    }

    return 0;
}