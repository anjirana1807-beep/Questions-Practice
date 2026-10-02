class Solution {
public:
void solve(int o,int c,string op,vector<string>& v){
    if(o==0 && c==0){
        v.push_back(op);
        return ;
    }
    if(o!=0){
        string op1=op;
        op1.push_back('(');
        solve(o-1,c,op1,v);
    }
    if(c>o){
        string op2=op;
        op2.push_back(')');
        solve(o,c-1,op2,v);
    }
}
    vector<string> generateParenthesis(int n) {
        int c=n,o=n;
        vector<string>v;
        string op="";
        solve(o,c,op,v);
        return v;
    }
};