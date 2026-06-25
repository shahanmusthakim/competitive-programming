// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> v1(N + 1), v2(M + 1);
    for (int i = 1; i <= N; i++)
        cin >> v1[i];
    for (int i = 1; i <= M; i++)
        cin >> v2[i];
    int i = 1, j = 1, cnt = 0;
    while (j <= M)
    {

        if (i <= N && v1[i] < v2[j])
        {
            i++;
            cnt++;
        }
        else
        {
            cout << cnt << " ";
            j++;
        }
    }

    return 0;
}