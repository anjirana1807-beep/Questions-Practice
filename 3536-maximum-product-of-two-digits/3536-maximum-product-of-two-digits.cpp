class Solution {
public:
    int maxProduct(int n) {
        int ans=INT_MIN;
        vector<int>m;
        while(n>0)
        {
           int d = n % 10;
           m.push_back(d);
           n=n/10;
        }
        for(int i=0;i<m.size();i++){
            for(int j=i+1;j<m.size();j++){
          ans=max(ans,m[i]*m[j]);
        }
        }
        return ans;
    }
};