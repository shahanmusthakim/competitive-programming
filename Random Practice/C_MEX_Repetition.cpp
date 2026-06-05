// https://codeforces.com/problemset/problem/1863/C
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
        int N, Q;
        cin >> N >> Q;
        vector<int> v(N), v1(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            v1[i] = v[i];
        }
        sort(v1.begin(), v1.end());
        int MEX = N;
        for (int i = 0; i < N; i++)
        {
            if (v1[i] != i)
            {
                MEX = i;
                break;
            }
        }
        v.push_back(MEX);
        int tmp = Q % (N + 1);
        int start = (N + 1 - tmp) % (N + 1);
        for (int i = 0; i < N; i++)
        {
            cout << v[(start + i) % (N + 1)] << " ";
        }
        cout << endl;
    }

    return 0;
}