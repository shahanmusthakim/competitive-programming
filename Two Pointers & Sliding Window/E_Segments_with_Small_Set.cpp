// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    map<int, int> m;
    long long ans = 0, i = 0, j = 0;
    while (j < N)
    {
        m[v[j]]++;
        if (m.size() <= M)
        {
            ans += j - i + 1;
        }
        else
        {
            while (m.size() > M)
            {
                m[v[i]]--;
                if (m[v[i]] == 0)
                    m.erase(v[i]);
                i++;
            }
            if (m.size() <= M)
            {
                ans += j - i + 1;
            }
        }
        j++;
    }
    cout << ans;

    return 0;
}