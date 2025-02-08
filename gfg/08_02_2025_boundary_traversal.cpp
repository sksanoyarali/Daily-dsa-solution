class Solution {
    bool isleaf(Node *root){
        return !root->left && !root->right;
    }
    void leftBoundary(Node *root,vector<int>& b){
        while(root!=NULL && !isleaf(root)){
            b.push_back(root->data);
            if(root->left){
                root=root->left;
            }
            else{
                root=root->right;
            }
            
        }
    }
    void leafnode(Node *root,vector<int>&b){
        if(!root){
            return;
        }
        leafnode(root->left,b);
        if(isleaf(root)){
            b.push_back(root->data);
        }
        leafnode(root->right,b);
    }
    void reverseRight(Node *root,vector<int>&b){
        vector<int> temp;
        while(root!=NULL && !isleaf(root)){
            temp.push_back(root->data);
            if(root->right){
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            b.push_back(temp[i]);
        }
    }
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> b;
        if(root==NULL) return b;
        b.push_back(root->data);
        if(isleaf(root)) return b;
        leftBoundary(root->left,b);
        leafnode(root,b);
        reverseRight(root->right,b);
        return b;
    }
};