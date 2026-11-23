class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int>mp;
        for(int i:ranks){
            mp[i]++;
        }
        vector<int>v(26);
        for(char c:suits){
            v[c-'a']++;
        }
        for(int x:v){
            if(x>=5) return "Flush";
        }
        bool ans=false;
        for(auto i:mp){
            if(i.second>=3) return "Three of a Kind";
            if(i.second>=2) ans='true';
        }
        if(ans) return "Pair";
        return "High Card";
    }
};