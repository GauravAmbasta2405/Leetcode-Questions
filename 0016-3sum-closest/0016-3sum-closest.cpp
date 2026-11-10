class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        int ans = 0;
        int res = INT_MAX;

        for(int i = 0; i < n; i++)
        {
            int j = i + 1;
            int k = n - 1;

            while(j < k)
            {

                int sum = nums[i] + nums[j] + nums[k];

                if(sum < target)
                {
                    j++;
                }

                else if(sum > target)
                {
                    k--;
                }

                else{

                    return sum;
                }


                if(abs(sum - target) < res)
                {
                    res = abs(sum - target);
                    ans = sum;

                }
            }
        }

        return ans;


        
        
    }
};