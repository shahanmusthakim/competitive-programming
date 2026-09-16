class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int sz1=arr1.size(),sz2=arr2.size();
        int ans=0;
        for(int i=0;i<sz1;i++){
            for(int j=0;j<sz2;j++){
                if(abs(arr1[i]-arr2[j])<=d){
                   ans++;
                   break;
                }
            }
        }
        return sz1-ans;
    }
};