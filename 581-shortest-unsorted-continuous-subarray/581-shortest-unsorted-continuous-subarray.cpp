class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> ans(nums.begin(),nums.end());
        sort(ans.begin(), ans.end());
        int n = nums.size();
        int s=0;
        int e=n-1;
        while(s<n && nums[s]== ans[s]){
            s++;
        }
        while(e >s && nums[e]== ans[e]){
            e--;
        }
        return (e-s+1);
        
    }
};