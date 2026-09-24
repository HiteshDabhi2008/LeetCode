class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) continue;
            int d=nums[i],sum=0;
            while(d){
                int last=d%10;
                sum+=last;
                d/=10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};