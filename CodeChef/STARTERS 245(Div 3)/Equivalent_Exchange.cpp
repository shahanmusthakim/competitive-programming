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
        vector<int> v(N);
        bool ok = false;
        for (int i = 0; i < N; i++)
            cin >> v[i];
        for (int i = 0; i <= Q; i++)
        {
            int r = i, b = Q - i;
            bool can = true;
            for (int j = 0; j < N; j++)
            {
                r += v[j];
                b -= v[j];
                if (r < 0 || b < 0)
                {
                    can = false;
                    break;
                }
            }
            if (can)
            {
                ok = true;
                break;
            }
        }
        (ok) ? cout << "YES" : cout << "NO";
        cout << '\n';
    }

    return 0;
}