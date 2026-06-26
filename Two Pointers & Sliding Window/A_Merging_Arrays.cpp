// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> v1(N), v2(M);
    for (int i = 0; i < N; i++)
        cin >> v1[i];
    for (int i = 0; i < M; i++)
        cin >> v2[i];
    int i = 0, j = 0;
    while (i < N && j < M)
    {
        if (v1[i] < v2[j])
        {
            cout << v1[i] << " ";
            i++;
        }
        else
        {
            cout << v2[j] << " ";
            j++;
        }
    }
    while (i < N)
    {
        cout << v1[i] << " ";
        i++;
    }
    while (j < M)
    {
        cout << v2[j] << " ";
        j++;
    }

    return 0;
}