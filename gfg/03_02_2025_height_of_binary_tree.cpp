class Solution {
  public:
    // Function to find the height of a binary tree.
    int height(Node* root) {
        // code here
        queue<Node*> q;
        q.push(root);
        if(root==NULL) return 0;
        int len=0;
        while(!q.empty()){
            int qs=q.size();
            len++;
            for(int i=0;i<qs;i++){
                Node* curr=q.front();
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            
        }
        return len-1;
    }
};