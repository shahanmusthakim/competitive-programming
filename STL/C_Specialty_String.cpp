// https://codeforces.com/problemset/problem/2200/C
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
        stack<char> st;
        for (int i = 0; i < N; i++)
        {
            if (st.empty())
                st.push(S[i]);
            else
            {
                if (S[i] == st.top())
                    st.pop();
                else
                    st.push(S[i]);
            }
        }
        (st.empty()) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}