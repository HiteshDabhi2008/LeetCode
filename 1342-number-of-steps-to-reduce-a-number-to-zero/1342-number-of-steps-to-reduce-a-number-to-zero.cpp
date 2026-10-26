class Solution {
public:
    int numberOfSteps(int num) {
        int a=num,c=0;
        while(a!=0){
            if(a%2!=0){
                a=a-1;
            }
            else{
                a=a/2;
            }
            c++;
        }
        return c;
    }
};