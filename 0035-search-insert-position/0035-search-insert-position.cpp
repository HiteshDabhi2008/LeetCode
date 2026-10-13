class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int found=0;
        int c;
        if (target<nums[0]) return 0;
        for (int i=0;i<nums.size();i++){
            if(target==nums[i]){
                found=1;
                c=i;
                break;
            }
        }

        if(found==0){
            for(int i=0;i<nums.size();i++){
                if(target>nums[i]){
                    c=i+1;
                }
            }
        } 
        return c; 
        
    }
};