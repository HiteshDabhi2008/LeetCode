class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       int sum=0,m=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            m=max(m,nums[i]);
        }
        if(sum % k == 0){
            return 0;
        }
        if(sum<k){
            return sum;
        }
        int count=0;
        while(true){
            count++;
            sum--;
            if(sum % k == 0){
                break;
            }
        }
        return count;
    }
};