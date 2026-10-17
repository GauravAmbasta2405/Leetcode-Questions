class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int currentsum = nums[0];
        int bestsum = nums[0];

        for(int i = 1; i < n; i++)
        {

            int v1 = currentsum + nums[i];
            int v2 = nums[i];

            currentsum = max(v1, v2);
            bestsum = max(bestsum, currentsum);
        }


        return bestsum;
        
    }
};