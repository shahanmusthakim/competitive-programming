// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        int n = s.size();
        map<char, int> m;
        int i = 0, j = 0, ans = -1;
        while (j < n)
        {
            m[s[j]]++;

            if (m.size() == k)
            {
                ans = max(ans, j - i + 1);
            }
            else
            {
                while (m.size() > k && i <= j)
                {
                    m[s[i]]--;
                    if (m[s[i]] == 0)
                        m.erase(s[i]);
                    i++;
                }
            }
            j++;
        }

        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}