class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            int n=nums.size();
            if(n==1) return 0;
            priority_queue<long long,vector<long long>,greater<long long>> pq;
            for(int ele:nums){
                pq.push(ele);
            }
            int count=0;
            while(!pq.empty()){
                if(pq.top()>=k){
                    break;
                }x
                else{
                    long long x=pq.top();
                    pq.pop();
                    long long y=pq.top();
                    pq.pop();
                    long long final=2*(min(x,y))+max(x,y);
                    pq.push(final);
                    count++;
                }
            }
            return count;
        }
    };