// https://codeforces.com/problemset/problem/637/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<string> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    reverse(v.begin(), v.end());
    unordered_set<string> un_s;
    for (int i = 0; i < N; i++)
    {
        if (un_s.find(v[i]) == un_s.end())
        {
            cout << v[i] << '\n';
            un_s.insert(v[i]);
        }
    }

    return 0;
}