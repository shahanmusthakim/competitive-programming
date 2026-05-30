// https://codeforces.com/problemset/problem/977/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    string S;
    cin >> S;
    map<string, int> m;
    for (int i = 0; i < N - 1; i++)
    {
        string ch = "";
        ch.push_back(S[i]);
        ch.push_back(S[i + 1]);
        m[ch]++;
    }
    string ans;
    int tmp = 0;
    for (auto x : m)
    {
        if (x.second >= tmp)
        {
            ans = x.first;
            tmp = x.second;
        }
    }
    cout << ans;

    return 0;
}