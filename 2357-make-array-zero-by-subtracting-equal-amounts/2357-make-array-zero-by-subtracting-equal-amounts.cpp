class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int num:nums){
            if(num!=0){
            mp[num]++;
            }
        }
        return mp.size();
    }
};