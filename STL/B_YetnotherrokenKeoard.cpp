// https://codeforces.com/problemset/problem/1907/B
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
        vector<pair<char, int>> sm, ca;
        string S;
        cin >> S;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] >= 'a' && S[i] <= 'z')
            {
                if (S[i] == 'b')
                {
                    if (!sm.empty())
                        sm.pop_back();
                }
                else
                    sm.push_back({S[i], i});
            }
            else
            {
                if (S[i] == 'B')
                {
                    if (!ca.empty())
                        ca.pop_back();
                }
                else
                    ca.push_back({S[i], i});
            }
        }
        vector<int> v;
        for (auto x : sm)
            v.push_back(x.second);
        for (auto x : ca)
            v.push_back(x.second);
        sort(v.begin(), v.end());
        for (auto x : v)
        {
            cout << S[x];
        }
        cout << endl;
    }

    return 0;
}