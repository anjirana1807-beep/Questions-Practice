class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int n=nums.size();
        int l=0 ,r=0,minlen=INT_MAX,sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>=k){
                minlen=min(minlen,r-l+1);
                sum=sum-nums[l];
                l++;
            }
            r++;
        }
        return minlen ==INT_MAX?0: minlen;
    }
};