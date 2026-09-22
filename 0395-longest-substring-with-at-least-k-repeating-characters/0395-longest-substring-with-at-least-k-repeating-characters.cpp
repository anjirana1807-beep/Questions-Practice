class Solution {
public:
    int longestSubstring(string s, int k) {
     int n=s.length(),ans=0;
     for(int t=0;t<=26;t++){
        vector<int>freq(26,0);
        int l=0,r=0;
        int unique=0,count=0;
        while(r<n){
            int idx=s[r]-'a';
            if(freq[idx]==0){
               unique++;
            }
            freq[idx]++;
            if(freq[idx]==k){
               count++;
            }
            while(unique>t){
                int lidx=s[l]-'a';
                if(freq[lidx]==k){
                    count--;
                }
                freq[lidx]--;
                if(freq[lidx]==0){
                    unique--;
                }
                l++;
            }
            if(unique==t && unique==count){
                ans=max(ans,r-l+1);
            }
            r++;
        }
     }
     return ans;
    }
};