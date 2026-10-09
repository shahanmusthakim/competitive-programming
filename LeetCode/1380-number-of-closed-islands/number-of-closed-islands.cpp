class Solution {
public:
bool visited[105][105];
 int n,m;
    bool ok=true;
    vector<pair<int,int>>p={{0,1},{0,-1},{1,0},{-1,0}};
    bool check(int i,int j){
        if(i<0 || i>=n||j<0 ||j>=m)return false;
        return true;
    }
    void DFS(vector<vector<int>>& grid,int i,int j){
        visited[i][j]=true;
        if(grid[i][j]!=0){
            ok=false;
        }
        for(auto x:p){
           int ci=x.first+i;
           int cj=x.second+j;
           if(!check(ci,cj))ok=false;
            if(check(ci,cj) && !visited[ci][cj] && grid[ci][cj]==0){
                DFS(grid,ci,cj);
            }

        }
    }

    int closedIsland(vector<vector<int>>& grid) {
       n=grid.size();
        m=grid[0].size();
        int cnt=0;
        memset(visited,false,sizeof(visited));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0 &&!visited[i][j]){
                    DFS(grid,i,j);
                    if(ok){
                        cnt++;
                    }else{
                         ok=true;
                    }
                   
                }
            }
        }
        return cnt;
 
    }
};