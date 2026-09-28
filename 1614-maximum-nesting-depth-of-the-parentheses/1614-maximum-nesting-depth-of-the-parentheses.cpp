class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int maxl=0;
        for(int i=0;i<s.length();i++){
            int c=0;
            if(s[i]=='('){
                st.push(s[i]);
                maxl = max(maxl, (int)st.size());
            }
            if(s[i]==')' && st.top()=='('){
                st.pop();
            }
        }
        return maxl;
    }
};