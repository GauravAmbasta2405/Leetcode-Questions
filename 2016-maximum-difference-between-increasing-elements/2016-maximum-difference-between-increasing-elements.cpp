class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res= nums[1]-nums[0];
        int minvalue= nums[0];
        int n= nums.size();
        for(int j=1;j<n;j++){
            res= max(res, nums[j]-minvalue);
            minvalue= min(minvalue, nums[j]);
        }
        return res>0? res: -1;
        
    }
};