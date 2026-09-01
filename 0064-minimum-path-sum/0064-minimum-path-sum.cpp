class Solution {
public:
int dfs(vector<vector<int>>& grid,vector<vector<int>>& dp,int j,int i){
    if(i==0 && j==0){
        return grid[0][0];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up=INT_MAX,d=INT_MAX;
    if(i>0){
     up=dfs(grid,dp,j,i-1);
    }
    if(j>0){
     d=dfs(grid,dp,j-1,i);
    }
    return dp[i][j]=grid[i][j]+min(d,up);
}
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return dfs(grid,dp,m-1,n-1);
    }
};