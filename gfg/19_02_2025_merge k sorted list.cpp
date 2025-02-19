class Solution {
    
    public:
    class compare{
      public:
      bool operator()(Node* a,Node* b){
          return a->data > b->data;
      }
      };
  
      // Function to merge K sorted linked list.
      Node* mergeKLists(vector<Node*>& arr) {
          // Your code here
          priority_queue<Node*,vector<Node*>,compare> pq;
      int k=arr.size();
      if(k==0) return NULL;
      for(int i=0;i<k;i++){
          if(arr[i]!=NULL){
              pq.push(arr[i]);
          }
      }
      Node* head=NULL;
      Node* tail=NULL;
      while(!pq.empty()){
          Node* temp=pq.top();
          pq.pop();
          if(head==NULL){
              head=tail=temp;
              if(head->next!=NULL){
                  pq.push(head->next);
              }
          }
          else{
              tail->next=temp;
              tail=tail->next;
              if(tail->next!=NULL){
                  pq.push(tail->next);
              }
          }
      }
      return head;
      }
  };