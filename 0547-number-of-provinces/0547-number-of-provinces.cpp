class Solution {
public:
void dfs(int src,vector<vector<int>>& adj,vector<int>&vis){
    vis[src]=1;
    for(int i=0;i<adj.size();i++){
        if(adj[src][i]==1 && !vis[i]){
            dfs(i,adj,vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& adj) {
      int c=0;
      vector<int>vis(adj.size(),0);
      for(int i=0;i<adj.size();i++){
        if(!vis[i]){
            c++;
            dfs(i,adj,vis);
        }
      }
      return c;
    }
};