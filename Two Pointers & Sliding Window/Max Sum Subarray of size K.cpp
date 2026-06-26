// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubarraySum(vector<int> &arr, int k)
    {
        int sz = arr.size();
        long long ans = 0, cnt = 0;
        int i = 0, j = 0;
        while (j < sz)
        {
            cnt += arr[j];
            if ((j - i + 1) == k)
            {
                ans = max(ans, cnt);
                cnt -= arr[i];
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