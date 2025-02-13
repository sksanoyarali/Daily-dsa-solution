class Solution {
    void dfs(Node *root,vector<int>& inorder){
        if(!root) return;
        dfs(root->left,inorder);
        inorder.push_back(root->data);
        dfs(root->right,inorder);
    }
  public:
    bool findTarget(Node *root, int target) {
        // your code here.
        vector<int> inorder;
        if(!root->left && !root->right) return false;
        dfs(root,inorder);
        int i=0;
        int j=inorder.size()-1;
        while(i<j){
            int sum=inorder[i]+inorder[j];
            if(sum==target){
                return true;
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};