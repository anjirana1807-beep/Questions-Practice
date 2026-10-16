class Solution {
public:
int squre(int num){
    int ans=0;
    while(num>0){
        int d=num%10;
        ans+=d*d;
        num=num/10;
    }
    return ans;
}
    bool isHappy(int n) {
    int slow=squre(n);
    int fast=squre(squre(n));
    while(slow!=fast){
        slow=squre(slow);
        fast=squre(squre(fast));
        // if(slow==1 || fast==1){
        //     return true;
        // }
    }
    return slow==1;
    }
};
