class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto &t : times){
            adj[t[0]].push_back({t[1],t[2]});
        }
        vector<int>dist(n+1,1e9);
        priority_queue< pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        dist[k]= 0;
        pq.push({0,k});
        while(!pq.empty()){
            int d=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it:adj[node]){
                int v=it.first;
                int wt=it.second;
                if(dist[v] > d+wt){
                    dist[v]=d+wt;
                    pq.push({dist[v],v});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(dist[i]==1e9)
            return -1;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};