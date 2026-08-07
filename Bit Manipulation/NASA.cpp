// https://www.codechef.com/problems/PALIXOR
#include <bits/stdc++.h>
using namespace std;
const int MAXN = (1LL << 15);
vector<int> allPalindrome;
bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

void markPalindrome()
{
    for (int i = 0; i < MAXN; i++)
    {
        if (isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    markPalindrome();
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> v(N), cnt(MAXN + 1);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }
        long long ans = N;
        for (int i = 0; i < N; i++)
        {
            for (int k = 0; k < allPalindrome.size(); k++)
            {
                int curr = (v[i] ^ allPalindrome[k]);
                ans += cnt[curr];
            }
        }
        cout << ans / 2 << '\n';
    }

    return 0;
}