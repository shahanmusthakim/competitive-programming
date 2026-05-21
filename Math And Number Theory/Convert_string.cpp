// https://www.codechef.com/problems/SAMESTR
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
                count0++;
            else
                count1++;
        }

        int ans = 0;
        for (int k = 1; k <= N; k++)
        {
            bool make1 = (k >= count0 && (k - count0) % 2 == 0);
            bool make0 = (k >= count1 && (k - count1) % 2 == 0);
            if (make1 || make0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}