class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
       vector<int>count(121,0);
       for(int age:ages){
        count[age]++;
       }
       int res=0;
       for(int i=1;i<=120;i++){
        for(int j=1;j<=120;j++){
            if(count[i]==0 || count[j]==0) continue;
            if(j<=0.5*i+7)continue;
            if(j>i) continue;
            if(j>100 && i<100) continue;

            res+=count[i]*count[j];
            if(i==j) res-=count[i];
        }
       }
       return res;
    }
};