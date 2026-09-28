class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int a=0;
        for(char c: s){
            if(c=='(') st.push(c);
            else if(c==')') st.pop();
            a=max(a,int(st.size()));
        }
        return a;
    }
};