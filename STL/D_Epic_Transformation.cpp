// https://codeforces.com/problemset/problem/1506/D
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
        map<int, int> m;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        priority_queue<int> pq;
        for (auto x : m)
        {
            pq.push(x.second);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;
            int A = pq.top();
            pq.pop();
            int B = pq.top();
            pq.pop();
            A--, B--;
            if (A > 0)
                pq.push(A);
            if (B > 0)
                pq.push(B);
        }
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << '\n';
    }

    return 0;
}