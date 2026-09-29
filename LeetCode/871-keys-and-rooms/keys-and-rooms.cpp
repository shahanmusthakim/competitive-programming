class Solution {
public:
    bool is[1005];
    void BFS(int s,vector<vector<int>>& v){
        queue<int>q;
        q.push(s);
        is[s]=true;
        while(!q.empty()){
            int tmp=q.front();
            q.pop();
            for(auto x :v[tmp]){
                if(is[x]==false){
                    q.push(x);
                    is[x]=true;
                }
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        memset(is,false,sizeof(is));
        BFS(0,rooms);
        int n= rooms.size();
        for(int i=0;i<n;i++){
            if(!is[i])return false;
        }
        return true;
    }
};