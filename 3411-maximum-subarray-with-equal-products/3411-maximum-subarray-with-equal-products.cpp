class Solution {
public:
    int maxLength(vector<int>& nums) {
        int best=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long prod=1;
            int cgcd=0,clcm=1;
            for(int j=i;j<n;j++){
                prod*=nums[j];
                cgcd=gcd(cgcd,nums[j]);
                clcm=clcm/gcd(clcm,nums[j])*nums[j];
                if(prod>25200){
                    break;
                }
                if(prod==clcm*cgcd){
                    best=max(best,j-i+1);
                }
            }
        }
        return best;
    }
};