class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        int j=0;
        sort(temp.begin(),temp.end());
        unordered_map<int,int>rank;
        int a=1;
        for(int num:temp){
            if(rank.find(num)==rank.end()){
                rank[num]=a;
                a++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=rank[arr[i]];
        }
        return arr;
    }
};