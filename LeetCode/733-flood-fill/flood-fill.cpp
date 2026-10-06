class Solution {
public:
    bool visited[52][52];
    int n,m,old;
    vector<pair<int,int>>pr={{-1,0},{1,0},{0,-1},{0,1}};
    bool check(int i,int j){
        if(i<0 || i>=n || j<0 || j>=m)return false;
        return true;
    }
    void DFS(vector<vector<int>>&v,int si,int sj,int clr){
         v[si][sj]=clr;
        visited[si][sj]=true;
        for(int i=0;i<4;i++){
            int ci=si+pr[i].first;
            int cj=sj+pr[i].second;
            if(check(ci,cj) && !visited[ci][cj] && v[ci][cj]==old){
                DFS(v,ci,cj,clr);
            }

        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        memset(visited,false,sizeof(visited));
        n=image.size();
        m=image[0].size();
        old=image[sr][sc];
        DFS(image,sr,sc,color);
        return image;
        
    }
};