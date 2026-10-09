class Solution {
public:
bool visited[305][305];
    int n,m;
    vector<pair<int,int>>p={{0,1},{0,-1},{1,0},{-1,0}};
    bool check(int i,int j){
        if(i<0 || i>=n||j<0 ||j>=m)return false;
        return true;
        
    }
    void DFS(vector<vector<char>>& grid,int i,int j){
        visited[i][j]=true;
        for(auto x:p){
           int ci=x.first+i;
           int cj=x.second+j;
            if(check(ci,cj) && !visited[ci][cj] && grid[ci][cj]=='1'){
                DFS(grid,ci,cj);
            }

        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int cnt=0;
        memset(visited,false,sizeof(visited));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' &&!visited[i][j]){
                    DFS(grid,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};