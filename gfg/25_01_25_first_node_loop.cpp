class Solution {
  public:
    Node* findFirstNode(Node* head) {
        // your code here
        unordered_set<Node*> st;
        while(head!=NULL){
            if(st.find(head)!=st.end()){
                return head;
            }
            st.insert(head);
            head=head->next;
        }
        return NULL;
    }
};