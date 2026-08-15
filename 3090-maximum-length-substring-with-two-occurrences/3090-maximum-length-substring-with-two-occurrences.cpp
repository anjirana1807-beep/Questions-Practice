class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=0;
        unordered_map<int,int>mp;
        int l=0;
        for(int i=0;i<s.length();i++){
             mp[s[i]]++;
            while(mp[s[i]]>2){
                mp[s[l]]--;
                l=l+1;
            }
             ans=max(ans,i-l+1);
        }
        return ans;
    }
};