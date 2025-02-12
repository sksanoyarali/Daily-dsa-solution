void dfs(Node* root,int & node,int &ans,int k){
    if(!root) return;
   dfs(root->left,node,ans,k);
   node=node+1;
   if(node==k){
       ans=root->data;
       return;
   }
   dfs(root->right,node,ans,k);
}
class Solution {
public:
// Return the Kth smallest element in the given BST
int kthSmallest(Node *root, int k) {
   // add code here.
   int node=0;
   int ans=-1;
   dfs(root,node,ans,k);
   return ans;
}
};