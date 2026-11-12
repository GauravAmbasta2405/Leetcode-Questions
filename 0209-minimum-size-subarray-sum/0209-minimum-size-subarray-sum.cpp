class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int low = 0;
        int high = 0;

        int ans = INT_MAX;
        int sum = 0;


        while(high < n)
        {


            // high include karo

            sum += nums[high];


            while(sum >= target)
            {

                ans = min(ans, high - low + 1);

                sum -= nums[low];
                low++;
            }


            high++;


        }


        return ans == INT_MAX ? 0 : ans;
        
    }
};