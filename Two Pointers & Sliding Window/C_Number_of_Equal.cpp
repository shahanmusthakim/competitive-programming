// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B;
    cin >> A >> B;
    vector<int> v1(A), v2(B);
    for (int i = 0; i < A; i++)
        cin >> v1[i];
    for (int i = 0; i < B; i++)
        cin >> v2[i];
    int i = 0, j = 0;
    long long ans = 0;
    while (i < A && j < B)
    {
        int curr = v1[i], cnt1 = 0, cnt2 = 0;
        while (i < A && v1[i] == curr)
        {
            cnt1++;
            i++;
        }
        while (j < B && curr > v2[j])
        {
            j++;
        }

        while (j < B && v2[j] == curr)
        {
            cnt2++;
            j++;
        }
        ans += (1LL * cnt1 * cnt2);
    }

    cout << ans;

    return 0;
}