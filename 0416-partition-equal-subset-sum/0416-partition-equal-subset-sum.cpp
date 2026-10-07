class Solution {

    private:

    bool func(vector<int>& nums, int target)
    {
        int n = nums.size();

        vector<vector<int>> dp(n + 1);

        for(int i = 0; i <= n; i++)
        {
            vector<int> t(target + 1, 0);

            dp[i] = t;
        }


        for(int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }


        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = 0; j <= target; j++)
            {

                if(nums[i] > j)
                {
                    dp[i][j] = dp[i + 1][j];
                }

                else{

                    dp[i][j] = ((dp[i+ 1][j - nums[i]]) or (dp[i + 1][j]));
                }
            }
        }


        return dp[0][target];
    }
public:
    bool canPartition(vector<int>& nums) {

        int sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }


        if(sum % 2 == 1) return false;

        else{

            return func(nums, sum/2);
        }
        
    }
};