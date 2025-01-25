class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int,int>> copy;
        int n=nums.size();
        for(int i=0;i<n;i++){
            copy.push_back({nums[i],i});
        }
        sort(copy.begin(),copy.end());
        int left=0;
        int right=1;
        while(right<n){
            vector<int> indexes={copy[left].second};
            while(right<n && (copy[right].first-copy[right-1].first)<=limit){
                indexes.push_back(copy[right].second);
                right++;
            }
            sort(indexes.begin(),indexes.end());
            for(int i=0;i<right-left;i++){
                nums[indexes[i]]=copy[left+i].first;
            }
            left=right;
            right++;
        }
        return nums;
    }
};class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int,int>> copy;
        int n=nums.size();
        for(int i=0;i<n;i++){
            copy.push_back({nums[i],i});
        }
        sort(copy.begin(),copy.end());
        int left=0;
        int right=1;
        while(right<n){
            vector<int> indexes={copy[left].second};
            while(right<n && (copy[right].first-copy[right-1].first)<=limit){
                indexes.push_back(copy[right].second);
                right++;
            }
            sort(indexes.begin(),indexes.end());
            for(int i=0;i<right-left;i++){
                nums[indexes[i]]=copy[left+i].first;
            }
            left=right;
            right++;
        }
        return nums;
    }
};