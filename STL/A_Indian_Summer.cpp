//https://codeforces.com/problemset/problem/44/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    map<pair<string, string>, bool> m;
    for (int i = 0; i < N; i++)
    {
        string A, B;
        cin >> A >> B;
        m[{A, B}] = true;
    }
    cout << m.size();

    return 0;
}