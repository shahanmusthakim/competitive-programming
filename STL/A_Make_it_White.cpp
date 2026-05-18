// https://codeforces.com/problemset/problem/1927/A
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
        int left = -1, right = -1;
        left = S.find('B');
        right = S.rfind('B');
        cout << (right - left) + 1 << endl;
    }

    return 0;
}