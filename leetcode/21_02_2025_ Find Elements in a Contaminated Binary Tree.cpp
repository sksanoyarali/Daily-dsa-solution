class FindElements {
    unordered_map<int,bool> mpp;
public:
    FindElements(TreeNode* root) {
        if(root==NULL) return;
        root->val=0;
        mpp[0]=true;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left){
                curr->left->val=2*curr->val+1;
                mpp[curr->left->val]=true;
                q.push(curr->left);

            }
            if(curr->right){
                curr->right->val=2*curr->val+2;
                mpp[curr->right->val]=true;
                q.push(curr->right);
            }
        }
    }
    
    bool find(int target) {
        if(mpp.find(target)!=mpp.end()){
            return true;
        }
        return false;
    }
};