class Solution {
public:
    string reversePrefix(string word, char ch) {
       stack <char> st;
       int found=0;
       for(int i=0;word[i]!='\0';i++){
            st.push(word[i]);
            if(word[i]==ch){
                found=1;
                break;
            }
        } 
        if(!found){
            return word;
        }
        else{
            int i=0;
            while(!st.empty()){
                word[i]=st.top();
                st.pop();
                i++;
            }
            return word;
        }

    }
};