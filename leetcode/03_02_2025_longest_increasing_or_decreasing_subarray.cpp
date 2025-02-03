class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int> prein(n,1);
        vector<int> predec(n,1);
        int ans=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                prein[i]+=prein[i-1];
                ans=max(ans,prein[i]);
            }
            if(nums[i]<nums[i-1]){
                predec[i]+=predec[i-1];
                ans=max(ans,predec[i]);
            }
        }
    return ans;
    }
};