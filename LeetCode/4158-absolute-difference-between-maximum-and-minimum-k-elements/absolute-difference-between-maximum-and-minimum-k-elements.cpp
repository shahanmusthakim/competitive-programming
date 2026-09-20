class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int mx=0,mn=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            mn+=nums[i];
        }
        reverse(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            mx+=nums[i];
        }
        return abs(mx-mn);
    }
};