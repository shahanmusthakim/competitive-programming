// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans=0,L=1,R=n,mid;
        while(L<=R){
            mid=L+(R-L)/2;
            if(isBadVersion(mid)){
                ans=mid;
                R=mid-1;
            }
            else{
                L=mid+1;
            }
        }
        return ans;


    }
};