// https://cses.fi/problemset/task/1755/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S;
    cin >> S;
    map<char, int> m;
    for (int i = 0; i < S.size(); i++)
    {
        m[S[i]]++;
    }
    char ch = ' ';
    int cnt = 0;
    for (auto x : m)
    {
        if (x.second % 2 != 0)
        {
            cnt++;
            ch = x.first;
        }
    }
    if (S.size() % 2 == 0 && cnt != 0 || S.size() % 2 != 0 && cnt != 1)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        sort(S.begin(), S.end());
        if (cnt == 1)
        {
            S.erase(S.find(ch), 1);
        }
        vector<char> v(S.size());
        int j = 0, k = S.size() - 1;
        for (int i = 0; i < S.size(); i++)
        {
            if (i % 2 == 0)
            {
                v[j] = S[i];
                j++;
            }
            else
            {
                v[k] = S[i];
                k--;
            }
        }
        if (cnt == 1)
        {
            int tmp = ceil((v.size() / (float)2));
            v.insert(v.begin() + tmp, ch);
        }
        for (auto x : v)
            cout << x;
    }
    return 0;
}