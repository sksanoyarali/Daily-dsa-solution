int diammeterOfBt(Node* root,int & diameter){
    if(root==NULL){
        return 0;
    }
    int lh=diammeterOfBt(root->left,diameter);
    int rh=diammeterOfBt(root->right,diameter);
    diameter=max(diameter,lh+rh);
    return 1+max(lh,rh);
}

class Solution {
  public:
    int diameter(Node* root) {
        // Your code here
        if(!root) return 0;
        int dia=0;
        diammeterOfBt(root,dia);
        return dia;
        
    }
}