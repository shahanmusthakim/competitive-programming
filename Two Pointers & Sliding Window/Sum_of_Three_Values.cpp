// https://cses.fi/problemset/task/1641
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> v(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    int a = 0, b = 0, c = 0;
    sort(v.begin(), v.end());
    bool ok = false;
    for (int i = 1; i <= N; i++)
    {
        int need = M - v[i].first;
        int j = i + 1, k = N;
        while (j < k)
        {
            if (v[j].first + v[k].first == need)
            {
                a = v[i].second;
                b = v[j].second;
                c = v[k].second;
                ok = true;
                break;
            }
            else if (v[j].first + v[k].first > need)
                k--;
            else
                j++;
        }
        if (ok)
            break;
    }
    if (!ok)
        cout << "IMPOSSIBLE";
    else
        cout << a << " " << b << " " << c;

    return 0;
}