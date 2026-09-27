class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dff1=abs(z-x),dff2=abs(z-y);
        if(dff1<dff2){
            return 1;
        }
        else if(dff1==dff2) return 0;
        else return 2;
    }
};