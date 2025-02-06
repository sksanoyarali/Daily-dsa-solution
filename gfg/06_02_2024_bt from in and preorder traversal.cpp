class Solution {
    Node* construct(vector<int> &inorder, vector<int> &preorder,int ins,int ine,int ps,int pe,unordered_map<int,int>&inordermap){
        if(ins>ine || ps>pe){
            return NULL;
        }
        Node* root=new Node(preorder[ps]);
        int inroot=inordermap[preorder[ps]];
        int leftNum=inroot-ins;
        root->left=construct(inorder,preorder,ins,inroot-1,ps+1,ps+leftNum,inordermap);
        root->right=construct(inorder,preorder,inroot+1,ine,ps+leftNum+1,pe,inordermap);
        return root;
    }
  public:
    // Function to build the tree from given inorder and preorder traversals
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        unordered_map<int,int> inordermap;
        for(int i=0;i<inorder.size();i++){
            inordermap[inorder[i]]=i;
        }
        return construct(inorder,preorder,0,inorder.size()-1,0,preorder.size()-1,inordermap);
    }
};