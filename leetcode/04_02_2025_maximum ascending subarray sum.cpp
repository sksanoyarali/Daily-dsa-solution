class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixsSSSSSum=nums;
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                prefixsum[i]+=prefixsum[i-1];
            }
            ans=max(ans,prefixsum[i]);
        }
        return ans;
    }
};