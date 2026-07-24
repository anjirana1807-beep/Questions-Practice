class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();
        int ac=count(s.begin(),s.end(),'1');
        vector<int>zc;
        int c=0;
        int i=0;
        while(i<n ){
            if(s[i]=='0'){
            int start=i;
            while(i<n && s[i]=='0')i++;
        
            zc.push_back(i-start);
            }
            else{
                i++;
            }
        }
        int ans=0;
        for(int i=1;i<zc.size();i++){
           ans=max(ans,zc[i]+zc[i-1]);
        }
        return ans+ac;
    }
};