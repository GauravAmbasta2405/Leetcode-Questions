class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count =0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int diff = k - nums[i];
            if(mp[diff]){
                count++;
                mp[diff]--;
            }
            else{
                mp[nums[i]]++;
            }
        }
        return count;
        
    }
};