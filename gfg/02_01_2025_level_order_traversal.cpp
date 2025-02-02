class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        if(root==NULL) return ans;
        while(!q.empty()){
            int qs=q.size();
            vector<int> temp;
            for(int i=0;i<qs;i++){
                Node* curr=q.front();
                q.pop();
                temp.push_back(curr->data);
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};