class Solution {

    private:
    int fn1(vector<int>& nums)
    {
        int currsum = nums[0];
        int maxsum = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            int v1 = currsum + nums[i];
            int v2 = nums[i];

            currsum = max(v1, v2);
            maxsum = max(maxsum, currsum);
        }

        return maxsum;
    }

        int fn3(vector<int>& nums)
    {
        int currsum = nums[0];
        int maxsum = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            int v1 = currsum + nums[i];
            int v2 = nums[i];

            currsum = min(v1, v2);
            maxsum = min(maxsum, currsum);
        }

        return maxsum;
    }

    int fn2(vector<int>& nums)
    {
        int sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }


        return sum;
    }
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int v1 = fn1(nums);
        int v2 = fn2(nums);
        int v3 = fn3(nums);

        if(v1 < 0) return v1;

        else{

            return max(v1, v2 - v3);
        }
        
    }
};