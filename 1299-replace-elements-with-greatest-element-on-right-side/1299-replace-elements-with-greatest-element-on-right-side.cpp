class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=-1;
        for(int i=0;i<n;i++){
            maxi=-1;
            for(int j=i+1;j<n;j++){
                maxi=max(maxi,arr[j]);
            }
            arr[i]=maxi;
        }
        return arr;
    }
};