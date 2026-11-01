class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int diff=0;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(i==1){
                diff=arr[i]-arr[i-1];
            }
            int x=arr[i]-arr[i-1];
            if(x==diff) continue;
            else return false;
        }
        return true;
    }
};