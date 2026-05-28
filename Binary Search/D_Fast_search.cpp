//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int K;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        int A, B;
        cin >> A >> B;
        auto start = lower_bound(v.begin(), v.end(), A);
        auto end = upper_bound(v.begin(), v.end(), B);

        cout << end - start << " ";
    }

    return 0;
}