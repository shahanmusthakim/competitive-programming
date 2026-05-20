// https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> v;

    int val;
    while (cin >> val)
    {
        v.push_back(val);
    }
    v.insert(v.begin(), 0);
    sort(v.begin(), v.end());
    for (int i = 1; i <= N; i++)
    {
        if (v[i] != i)
        {
            cout << i;
            break;
        }
    }

    return 0;
}