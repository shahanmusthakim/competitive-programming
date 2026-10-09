class Solution {
public:
bool visited[105][105];
vector<pair<int,int>>p={{0,1},{0,-1},{1,0},{-1,0}};
int N,M,cnt=0;
bool check(int i,int j){
    if(i<0 || i>=N || j<0 || j>=M)return false;
    return true;
}
void DFS(vector<vector<int>>& grid,int i,int j){
    visited[i][j]=true;
    for(auto x : p){
        int ci=x.first+i;
        int cj=x.second+j;
        if(!check(ci,cj))cnt++;
        else if(check(ci,cj) && grid[ci][cj]==0)cnt++;
        else if(check(ci,cj) && !visited[ci][cj] &&grid[ci][cj]==1){
            DFS(grid,ci,cj);
        }

    }
}
    int islandPerimeter(vector<vector<int>>& grid) {
      N=grid.size();
      M=grid[0].size();
      memset(visited,false,sizeof(visited));
      for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(grid[i][j]==1 && !visited[i][j]){
                DFS(grid,i,j);
            }
        }
      }
      return cnt;
    }
};