class Solution {
public:
bool visited[505][505];
    int n,m;
    bool ok=true;
    vector<pair<int,int>>p={{0,1},{0,-1},{1,0},{-1,0}};
    bool check(int i,int j){
        if(i<0 || i>=n||j<0 ||j>=m)return false;
        return true;
    }
    void DFS(vector<vector<int>>& grid1,vector<vector<int>>& grid,int i,int j){
        visited[i][j]=true;
        if(grid1[i][j]!=1){
            ok=false;
        }
        for(auto x:p){
           int ci=x.first+i;
           int cj=x.second+j;
            if(check(ci,cj) && !visited[ci][cj] && grid[ci][cj]==1){
                DFS(grid1,grid,ci,cj);
            }

        }
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        n=grid2.size();
        m=grid2[0].size();
        int cnt=0;
        memset(visited,false,sizeof(visited));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1 &&!visited[i][j]){
                    DFS(grid1,grid2,i,j);
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