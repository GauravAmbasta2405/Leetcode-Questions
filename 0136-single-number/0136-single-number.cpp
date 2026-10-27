class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n = nums.size();
        int xorr1 = 0;
       

        for(int i = 0; i < n; i++)
        {

            xorr1 = xorr1 ^ nums[i];
            

        }

        return xorr1;

      
        
    }
};