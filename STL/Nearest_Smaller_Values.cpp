// https://cses.fi/problemset/task/1645/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> v[i];
    stack<int> st;
    for (int i = 1; i <= N; i++)
    {
        while (!st.empty() && v[st.top()] >= v[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            cout << 0 << " ";
        }
        else
            cout << st.top() << " ";
        st.push(i);
    }
    return 0;
}