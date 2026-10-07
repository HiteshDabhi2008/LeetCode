class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) 
            return false;
        int og=x;
        int lastdigit;
        int  long reverse=0;
        while (x>0){
            lastdigit=x%10;
            reverse=(reverse*10)+lastdigit;
            x/=10;
        }
        if(reverse==og) 
            return true;
        else 
            return false;
    }
};