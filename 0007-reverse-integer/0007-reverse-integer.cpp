class Solution {
public:
    int reverse(int x) {
        int long reverse=0;
        int lastdigit;
        while(x!=0){
            lastdigit=x%10;
            reverse=(reverse*10)+lastdigit;
            x/=10;
            if(reverse>INT_MAX || reverse<INT_MIN){
                return 0;
            }
        }
      return reverse;  
    }
};