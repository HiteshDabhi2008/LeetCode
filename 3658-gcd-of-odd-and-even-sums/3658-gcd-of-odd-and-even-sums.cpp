class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumO=0,sumE=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0){
                sumE+=i;
            }
            else{
                sumO+=i;
            }
        }
        return gcd(sumE,sumO);
    }
};