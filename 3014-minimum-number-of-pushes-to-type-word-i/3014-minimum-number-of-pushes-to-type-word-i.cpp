class Solution {
public:
    int minimumPushes(string word) {
        int res=0;
        unordered_map<int,int>mp;
        int a=2;
        for(char ch:word){
            if(a>9){
                a=2;
            }
            mp[a]++;
            res+=mp[a];

            a++;
        }
        return res;
    }
};