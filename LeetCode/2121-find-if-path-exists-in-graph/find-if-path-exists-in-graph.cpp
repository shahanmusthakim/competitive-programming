class Solution {
public:
    bool visited[200005];
    vector<int>v[200005];
    void DFS(int s){
        visited[s]=true;
        for(auto x:v[s]){
            if(!visited[x]){
                DFS(x);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
     for(int i=0;i<edges.size();i++){
        int a=edges[i][0];
        int b=edges[i][1];
        v[a].push_back(b);
        v[b].push_back(a);
     }
     memset(visited,false,sizeof(visited));
     DFS(source);  
     return visited[destination]; 
    }
};