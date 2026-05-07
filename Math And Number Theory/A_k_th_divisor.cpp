//https://codeforces.com/problemset/problem/762/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N, K;
    cin >> N >> K;
    vector<long long> vec;
    for (long long i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            vec.push_back(i);
            if ((N / i) != i)
                vec.push_back(N / i);
        }
    }
    sort(vec.begin(), vec.end());
    if (vec.size() < K)
        cout << -1 << endl;
    else
        cout << vec[K - 1] << endl;

    return 0;
}