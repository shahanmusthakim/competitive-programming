// https://codeforces.com/problemset/problem/1986/C
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
        int N, M;
        cin >> N >> M;
        string S;
        cin >> S;
        set<int> st;
        for (int i = 0; i < M; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        string C;
        cin >> C;
        sort(C.begin(), C.end());
        int tmp = 0;
        for (auto x : st)
        {
            S[x - 1] = C[tmp];
            tmp++;
        }
        cout << S << '\n';
    }

    return 0;
}