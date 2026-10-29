class Solution {
public:
    int arr[50];
    int fibo(int n){
        if(n<3)return n;
        if(arr[n]==-1){
             arr[n]=fibo(n-1)+fibo(n-2);
        }
        return arr[n];
    }
    int climbStairs(int n) {
        memset(arr,-1,sizeof(arr));
        return fibo(n);
    }
};