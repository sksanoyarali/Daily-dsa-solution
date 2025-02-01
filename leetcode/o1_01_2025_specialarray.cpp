class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        for(int i=0;i<n-1;i++){
            int first=nums[i];
            int second=nums[i+1];
             if ((first & 1) == (second & 1)) {
                return false;
            }
        }
        return true;
    }
};