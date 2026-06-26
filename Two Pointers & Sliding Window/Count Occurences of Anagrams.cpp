//https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(string &pat, string &txt)
    {
        int N = txt.size(), M = pat.size();
        vector<int> curr(26), need(26);
        for (auto c : pat)
        {
            need[c - 'a']++;
        }
        int ans = 0;
        for (int i = 0; i < M; i++)
        {
            curr[txt[i] - 'a']++;
        }

        if (curr == need)
            ans++;
        int l = 0, r = M;
        while (r < N)
        {
            curr[txt[r] - 'a']++;
            curr[txt[l] - 'a']--;
            if (curr == need)
                ans++;
            l++, r++;
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