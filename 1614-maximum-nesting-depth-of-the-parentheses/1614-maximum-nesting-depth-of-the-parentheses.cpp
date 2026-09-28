class Solution {
public:
    int maxDepth(string s) {
        int a=0,count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
                if(count>a){
                    a=count;
                }
            }
            else if(s[i]==')'){
                count--;
            }
        }
        return a;
    }
};