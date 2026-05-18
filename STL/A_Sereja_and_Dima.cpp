//https://codeforces.com/problemset/problem/381/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    deque<int> dq(N);
    for (int i = 0; i < N; i++)
        cin >> dq[i];
    int ans1 = 0, ans2 = 0, move = 1;
    while (!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();
        int mx = max(left, right);
        if (move % 2 == 0)
            ans2 += mx;
        else
            ans1 += mx;

        if (left == mx)
            dq.pop_front();
        else
            dq.pop_back();

        move++;
    }
    cout << ans1 << " " << ans2;

    return 0;
}