class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for(int x : nums)
            first = max(first, (long long)x);

        for(int x : nums)
            if(x != first)
                second = max(second, (long long)x);

        for(int x : nums)
            if(x != first && x != second)
                third = max(third, (long long)x);

        return third == LLONG_MIN ? first : third;   
    }
};