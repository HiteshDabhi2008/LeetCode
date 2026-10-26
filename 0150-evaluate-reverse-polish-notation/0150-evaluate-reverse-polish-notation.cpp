class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c : tokens){
            if(c=="+"){
                int x= st.top();st.pop();
                int y=st.top();st.pop();
                st.push(x+y);
            }
            else if(c=="*"){
                int x= st.top();st.pop();
                int y=st.top();st.pop();
                st.push(x*y);
            }
            else if(c=="-"){
                int x= st.top();st.pop();
                int y=st.top();st.pop();
                st.push(y-x);  
            }
            else if(c=="/"){
                int x= st.top();st.pop();
                int y=st.top();st.pop();
                st.push(y/x); 
            }
            else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};