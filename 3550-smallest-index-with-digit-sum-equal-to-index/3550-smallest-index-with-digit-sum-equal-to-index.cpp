class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            int sum=0;
                while(nums[i]>0){
                int d=nums[i]%10;
                sum+=d;
                nums[i]/=10;
                }
            if(sum==i){
             ans=i;
             break;
            }
        }
        return ans;
    }
};