class Solution {
    int normalmaxsum(vector<int>& nums, int n){
        int res= nums[0];
        int maxEnding= nums[0];
        for(int i=1;i<n;i++){
            maxEnding= max(nums[i], maxEnding+ nums[i]);
            res= max(maxEnding, res);
        }
        return res;
    }
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int max_normal = normalmaxsum(nums,n);
        if(max_normal < 0){
            return max_normal;
        }
        int arr_sum =0;
        for(int i=0;i<n;i++){
            arr_sum+=nums[i];
            nums[i]=-nums[i];
        }
        int max_circular = arr_sum + normalmaxsum(nums,n);
        return max(max_circular, max_normal);
        
        
    }
};