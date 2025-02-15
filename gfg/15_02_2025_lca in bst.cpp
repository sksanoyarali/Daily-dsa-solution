class Solution {
    public:
      Node* LCA(Node* root, Node* n1, Node* n2) {
          // code here
          Node* curr=root;
          while(curr){
              if (curr->data == n1->data || curr->data == n2->data) {
                  return curr;
              }
              else if((curr->data<n1->data && curr->data>n2->data)
              || (curr->data>n1->data && curr->data<n2->data)){
                  return curr;
              }
              else if(curr->data>n1->data && curr->data>n2->data){
                  curr=curr->left;
              }
              else{
                  curr=curr->right;
              }
          }
          return NULL;
      }
  };