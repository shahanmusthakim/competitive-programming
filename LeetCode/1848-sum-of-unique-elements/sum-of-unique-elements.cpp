class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int ,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int ans=0;
        for(auto x :m){
            if(x.second==1){
                ans+=x.first;
            }
        }
        return ans;
    }
};