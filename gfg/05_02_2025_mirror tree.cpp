class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        // code here
        if(root==NULL) return;
        Node* l=root->left;
        Node* r=root->right;
        root->left=r;
        root->right=l;
        mirror(root->left);
        mirror(root->right);
        
    }
};