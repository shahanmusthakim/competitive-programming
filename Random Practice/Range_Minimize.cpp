//https://www.codechef.com/problems/MNR
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
        sort(v.begin(), v.end());
        int tmp = v[N - 3] - v[0];
        int tmp1 = v[N - 1] - v[2];
        int tmp2 = v[N - 2] - v[1];

        cout << min({tmp, tmp1, tmp2}) << endl;
    }

    return 0;
}