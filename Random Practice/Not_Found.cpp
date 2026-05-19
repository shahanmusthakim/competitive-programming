// https://atcoder.jp/contests/abc071/tasks/abc071_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    set<char> a;
    for (int i = 0; i < s.size(); i++)
    {
        a.insert(s[i]);
    }
    char ch = 'a';
    bool ok = false;
    for (auto x : a)
    {
        if (x != ch)
        {
            cout << ch;
            ok = true;
            break;
        }
        else
        {
            ch++;
        }
    }
    if (!ok)
    {
        if (ch > 'z')
            cout << "None";
        else
            cout << ch;
    }

    return 0;
}