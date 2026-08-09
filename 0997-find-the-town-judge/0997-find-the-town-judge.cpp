class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1){
            return n;
        }
        vector<int>c(n+1);
        for(auto i: trust){
               c[i[0]]--;
               c[i[1]]++;
        }
        for(int i=0;i<c.size();i++){
            if(c[i]==n-1)
            return i;
        }
        return -1;
    }
};