// https://www.codechef.com/problems/ARRAYSTATE
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
        int A, K;
        cin >> A >> K;
        deque<int> dq(A);
        for (int i = 0; i < A; i++)
            cin >> dq[i];
        for (int i = 0; i < K; i++)
        {
            int mn = dq.front();
            int mx = dq.back();
            dq.pop_back();
            dq.pop_front();
            dq.push_back(mn + mx);
        }
        for (auto x : dq)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}