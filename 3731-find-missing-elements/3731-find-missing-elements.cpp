class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if(nums.empty())
           return {};
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int>ls;
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        for(int i=mn;i<=mx;i++){
            if(mp.find(i)==mp.end()){
              ls.push_back(i);
            }
        }
        return ls;
    }
};