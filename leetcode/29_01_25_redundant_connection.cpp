class Solution {
    bool bfs(int start,int end,unordered_map<int,vector<int>> &adj,int n){
        queue<int> q;
        int cnt=0;
        vector<int> visited(n+1,0);
        q.push(start);
        visited[start]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cnt++;
            for(int adjnode:adj[node]){
                if(adjnode==end && node==start){
                    continue;
                }
                if(!visited[adjnode]){
                    q.push(adjnode);
                    visited[adjnode]=1;
                }
            }
        }
        return cnt==n;
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> adj;
        int n=edges.size();
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
             adj[v].push_back(u);
        }
        for(int i=n-1;i>=0;i--){
            int s=edges[i][0];
            int e=edges[i][1];
            if(bfs(s,e,adj,n)){
                return edges[i];
            }
        }
        return {0,0};
    }
};