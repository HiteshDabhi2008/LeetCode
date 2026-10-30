class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start=0, end =0;
        while(end<nums.size()){
            if(nums[end]%2 ==0){
                swap(nums[start], nums[end]);
                start++;
            }
            end++;
        }
        return nums;
    }
};