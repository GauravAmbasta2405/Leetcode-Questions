class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //int n = nums.size();

        vector<int> pos, neg;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0 )
            {
                pos.push_back(nums[i] * nums[i]);
            }

            else{

                neg.push_back(nums[i] * nums[i]);
            }
        }


        reverse(neg.begin(), neg.end());


        int i = 0, j = 0;

        int m = pos.size();
        int n = neg.size();

        vector<int> ans;

        while(i < m && j < n)
        {

            if(pos[i] <= neg[j])
            {
                ans.push_back(pos[i]);
                i++;
            }

            else{

                ans.push_back(neg[j]);
                j++;
            }

            
        }


        while(i < m)
        {
            ans.push_back(pos[i]);
            i++;
        }

        while(j < n)
        {
            ans.push_back(neg[j]);
            j++;
        }
        


        return ans;
    }
};