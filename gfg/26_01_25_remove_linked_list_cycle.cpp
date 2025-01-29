
class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        if(head==NULL) return;
        unordered_set<Node*> st;
        Node* temp=head;
        while(temp->next!=NULL){
            if(st.find(temp->next)!=st.end()){
                temp->next=NULL;
                return;
            }
            st.insert(temp);
            temp=temp->next;
        }
    }
};