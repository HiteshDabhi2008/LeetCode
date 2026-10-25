class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;
        int n=nums.size();
        vector<int> freq(n + 1, 0);

        for (int x : nums)
            freq[x]++;

        for (int i = 1; i <= n; i++)
        {
            if (freq[i] == 0)
                missing.push_back(i);
        }
        return missing;
    }
};