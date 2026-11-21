class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int ec=0,od=0;
        for(int i=n-1;i>=0;i--){
                if(nums[i]%2==0){
                    ans[i]=od;
                    ec++;
                }else{
                    ans[i]=ec;
                    od++;
                }
        }
        return ans;
    }
};