// http://codeforces.com/problemset/problem/2092/B
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
        string S, T;
        cin >> S >> T;
        int a_ev1 = 0, a_od1 = 0, b_ev0 = 0, b_od0 = 0;
        for (int i = 0; i < N; i++)
        {
            int pos = i + 1;
            if (pos % 2 == 0)
            {
                if (S[i] == '1')
                    a_ev1++;
                if (T[i] == '0')
                    b_ev0++;
            }
            else
            {
                if (S[i] == '1')
                    a_od1++;
                if (T[i] == '0')
                    b_od0++;
            }
        }
        if (a_od1 <= b_ev0 && a_ev1 <= b_od0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}