class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       vector<int>v;
       for(int i=0;i<n;i++){
          if(nums[i]==0){
            v.push_back(i);
          }
       }

       for(int i=0;i<(int)v.size();i++){
            nums.erase(nums.begin()+(v[i]-i));
            nums.push_back(0);
       }
       
    }
};