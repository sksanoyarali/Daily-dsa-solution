class Solution {
    public:
    void solve(Node* root,int k,int &count,int prefixSum,unordered_map<int,int> &mp){
        if(!root) return;
        prefixSum+=root->data;
        if (mp.find(prefixSum - k) != mp.end()) {
            count += mp[prefixSum - k];
        }
  
        if (prefixSum == k) count++;
        mp[prefixSum]++;
        solve(root->left, k,count, prefixSum, mp);
        solve(root->right, k,count, prefixSum, mp);
  
        mp[prefixSum]--;
    }
      int sumK(Node *root, int k) {
          // code here
          int count=0;
          vector<int> path;
          int prefixsum=0;S
          unordered_map<int,int> mp;
          solve(root,k,count,prefixsum,mp);
          return count;
      }
  };