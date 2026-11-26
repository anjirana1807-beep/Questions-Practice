class Solution {
public:
    bool canAliceWin(int n) {
    int m=0;
    for(int k=1;k<=10;k++){
        if(k*(21-k)/2<=n) m=k;
        else break;
    }
    if(m%2==0){
        return false;
    }
    return true;
    }
};