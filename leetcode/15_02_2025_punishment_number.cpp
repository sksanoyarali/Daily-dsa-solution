class Solution {
    public:
    bool canPartion(int ind,int sum,string& sqstring,int target,vector<vector<int>>& dp){
        if(ind==sqstring.size()){
            if(sum==target) return true;
            return false;
        }
        if(sum>target) return false;
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        bool possible=false;
        for(int j=ind;j<sqstring.size();j++){
            string part=sqstring.substr(ind,j-ind+1);
            int val=stoi(part);
            possible=possible ||canPartion(j+1,sum+val,sqstring,target,dp);
            if(possible==true){
                return true;
            }
        }
        return dp[ind][sum]=possible;
    }
        int punishmentNumber(int n) {
            int res=0;
            for(int num=1;num<=n;num++){
                int sqnum=num*num;
                string sqstring=to_string(sqnum);
                // changing parameter are ind and sum
                vector<vector<int>> dp(sqstring.size(),vector<int>(num+1,-1));
                if(canPartion(0,0,sqstring,num,dp)==true){
                    res+=sqnum;
                }
            }
            return res;
        }
    };