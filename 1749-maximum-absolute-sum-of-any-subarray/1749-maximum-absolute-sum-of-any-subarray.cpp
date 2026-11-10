class Solution {
    private:

    int fn1(vector<int>& nums)
    {
        int n = nums.size();

        int maxsum = nums[0];
        int currsum = nums[0];

        for(int i = 1; i < n; i++)
        {
            int v1 = currsum + nums[i];
            int v2 = nums[i];

            currsum = max(v1, v2);

            maxsum = max(maxsum, currsum);
        }

        return maxsum;
    }

        int fn2(vector<int>& nums)
    {
        int n = nums.size();

        int minsum = nums[0];
        int currsum = nums[0];

        for(int i = 1; i < n; i++)
        {
            int v1 = currsum + nums[i];
            int v2 = nums[i];

            currsum = min(v1, v2);

            minsum = min(minsum, currsum);
        }

        return minsum;
    }

public:
    int maxAbsoluteSum(vector<int>& nums) {

        int n = nums.size();

        int v1 = fn1(nums);
        int v2 = fn2(nums);


        return max(abs(v1), abs(v2));


        
    }
};