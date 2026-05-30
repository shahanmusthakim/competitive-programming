// https://codeforces.com/problemset/problem/1579/E1
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
        vector<int> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i];
        deque<int> dq;
        int tmp = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            if (tmp > v[i])
            {
                dq.push_front(v[i]);
                tmp = v[i];
            }
            else
                dq.push_back(v[i]);
        }
        for (int x : dq)
            cout << x << ' ';
        cout << '\n';
    }

    return 0;
}