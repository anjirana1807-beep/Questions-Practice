class Solution {
public:
bool valid(int i,vector<int>&arr,int d){
    for(int y:arr){
        if(abs(y-i)<=d) return false;
    }
    return true;
}
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
       int c=0;
       for(int x:arr1){
        if(valid(x,arr2,d))
        c++;
       }
       return c;
    }
};