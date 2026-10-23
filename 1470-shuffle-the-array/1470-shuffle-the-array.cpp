class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        int j=n;
        int i=0;
        while(i<n && j<2*n){
            a.push_back(nums[i]);
            a.push_back(nums[j]);
            i++;
            j++;
        }
        return a;
    }
};