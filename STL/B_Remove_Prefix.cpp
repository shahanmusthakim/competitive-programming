// https://codeforces.com/problemset/problem/1714/B
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
        vector<int> v(N);
        for (int i = 0; i < N; i++)
            cin >> v[i];
        reverse(v.begin(), v.end());
        set<int> s;
        for (int i = 0; i < N; i++)
        {
            int sz = s.size();
            s.insert(v[i]);
            if (s.size() == sz)
                break;
        }
        cout << v.size() - s.size() << '\n';
    }

    return 0;
}