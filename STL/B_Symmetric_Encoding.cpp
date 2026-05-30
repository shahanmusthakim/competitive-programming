// https://codeforces.com/problemset/problem/1974/B
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
        set<char> s;
        for (int i = 0; i < N; i++)
        {
            s.insert(S[i]);
        }
        string B;
        for (auto x : s)
        {
            B.push_back(x);
        }
        vector<pair<char, char>> v;
        int i = 0, j = B.size() - 1;
        while (i <= j)
        {
            v.push_back({B[i], B[j]});
            i++;
            j--;
        }
        for (int i = 0; i < N; i++)
        {
            char ch = S[i];
            for (auto x : v)
            {
                if (x.second == ch)
                    S[i] = x.first;
                if (x.first == ch)
                    S[i] = x.second;
            }
        }
        cout << S << '\n';
    }

    return 0;
}