class Solution {
public:
    int dis[105];
    vector<pair<int,int>>v[105];
    void dijkstar(int s) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        pq.push({0, s});
        dis[s] = 0;
        while (!pq.empty()) {
            pair<int, int> p = pq.top();
            pq.pop();
            int p_node = p.second;
            int p_dis = p.first;
            if(p_dis>dis[p_node])continue;
            for (auto x : v[p_node]) {
              
                int x_node = x.first;
                int x_dis = x.second;
                if (p_dis + x_dis < dis[x_node]) {
                    dis[x_node] = p_dis + x_dis;
                    pq.push({dis[x_node], x_node});
                    
                }
            }
          }
        }
        int networkDelayTime(vector<vector<int>> & times, int n, int k) {
            for (int i = 1; i <= n; i++) {
                dis[i] = INT_MAX;
            }
            for(int i=0;i<times.size();i++){
                int a=times[i][0];
                int b=times[i][1];
                int c=times[i][2];
                v[a].push_back({b,c});
            }
            dijkstar(k);
            int ans = 0;
            for (int i = 1; i <= n; i++) {
                if (dis[i] == INT_MAX)
                    return -1;
                else
                    ans = max(ans, dis[i]);
            }
            return ans;
        }
    };