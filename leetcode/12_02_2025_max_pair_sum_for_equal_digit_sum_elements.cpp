class Solution {
    int sumofdigit(int num){
        int sum=0;
        while(num){
            sum+=(num%10);
            num=num/10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        int maxsum=-1;
        unordered_map<int,int>mpp;//digitsum,value
        for(int i=0;i<n;i++){
            int digitSum=sumofdigit(nums[i]);
            if(mpp.find(digitSum)!=mpp.end()){
                maxsum=max(maxsum,nums[i]+mpp[digitSum]);
                if(nums[i]>mpp[digitSum]){
                    mpp[digitSum]=nums[i];
                }
            }
            else{
                mpp[digitSum]=nums[i];
            }
        }
        return maxsum;
    }
};