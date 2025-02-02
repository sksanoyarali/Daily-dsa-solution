class Solution {
public:
    bool check(vector<int>& arr) {
       int n=arr.size();
       int unvalid=0;
       for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            unvalid++;
        }
       }
       if(arr[n-1]>arr[0]){
        unvalid++;
       }
       return unvalid<=1;

    }
};