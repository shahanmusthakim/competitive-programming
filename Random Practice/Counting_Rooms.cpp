#include <bits/stdc++.h>
using namespace std;
char matrix[1005][1005];
bool visited[1005][1005];
int N, M;
vector<pair<int, int>> p = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool check(int i, int j)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
        return false;
    return true;
}
void DFS(int si, int sj)
{
    visited[si][sj] = true;
    for (auto x : p)
    {
        int ci = x.first + si;
        int cj = x.second + sj;
        if (check(ci, cj) && !visited[ci][cj] && matrix[ci][cj] != '#')
        {
            DFS(ci, cj);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int cnt = 0;
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!visited[i][j] && matrix[i][j] != '#')
            {
                DFS(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}