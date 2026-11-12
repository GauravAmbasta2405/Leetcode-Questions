class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n = nums.size();

        int low = 0;
        int high = 0;
        int zeros = 0;

        int maxi = INT_MIN;


        while(high < n)
        {

            if(nums[high] == 0)
            {
                zeros++;
            }


            while(zeros > k)
            {
                if(nums[low] == 0)
                {
                    zeros--;
                }

                low++;
            }


            maxi = max(maxi, high - low + 1);

            high++;


        }


        return maxi == INT_MIN ? -1 : maxi;
        
    }
};