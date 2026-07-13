// https://codeforces.com/problemset/problem/1605/B
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
        string S;
        cin >> S;
        string A = S;
        sort(A.begin(), A.end());
        if (S == A)
            cout << 0 << '\n';
        else
        {
            vector<int> v;
            for (int i = 0; i < N; i++)
            {
                if (S[i] != A[i])
                {
                    v.push_back(i);
                }
            }
            cout << 1 << '\n';
            cout << v.size() << " ";

            for (int x : v)
                cout << x + 1 << " ";
            cout << endl;
        }
    }

    return 0;
}