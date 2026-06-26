//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> firstNegInt(vector<int> &arr, int k)
    {
        int N = arr.size();
        vector<int> ans;
        queue<int> q;
        int i = 0, j = 0;
        while (j < N)
        {
            if (arr[j] < 0)
                q.push(arr[j]);
            if (j - i + 1 == k)
            {
                if (!q.empty())
                {
                    ans.push_back(q.front());
                    if (arr[i] == q.front())
                        q.pop();
                }
                else
                    ans.push_back(0);
                i++;
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