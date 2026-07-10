// https://codeforces.com/problemset/problem/2117/B
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
        vector<int> v;
        for (int i = 1; i < N; i++)
        {
            if (i % 2 == 0)
                cout << i << " ";
            else
                v.push_back(i);
        }
        cout << N << " ";
        reverse(v.begin(), v.end());
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}