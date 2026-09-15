class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int L = 0, R = arr.size() - 1, mid;
        while (L <= R) {
            mid = L + (R - L) / 2;
            int miss = arr[mid] - (mid + 1);
            if (miss < k)
                L = mid + 1;
            else
                R = mid - 1;
        }
        return R + 1 + k;
    }
};