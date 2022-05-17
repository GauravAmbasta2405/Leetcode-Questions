class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int sum = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem = (sum%k);
            if(rem < 0)
                rem+=k;
            if(mpp[rem]){
                ans+= mpp[rem];
                mpp[rem]++;
            }
            else{
                mpp[rem]=1;
            }
        }
        return ans;
        
    }
};