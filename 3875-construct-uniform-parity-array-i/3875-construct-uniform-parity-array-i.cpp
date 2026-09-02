class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool haseven=false , hasodd=false;
        for(int x:nums1){
            if(x%2 ==0) haseven=true;
            else 
            {
                hasodd=true;
            }
        }
        if(!haseven || !hasodd) return true;
        return true;
    }
};