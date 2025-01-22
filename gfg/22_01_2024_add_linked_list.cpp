class Solution {
    Node* reverseList(Node* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        Node* curr = head;
        Node* prev = NULL;
        while (curr != NULL) {
            Node* nextptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextptr;
        }
        return prev;
    }
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        Node* h1=reverseList(num1);
        Node* h2=reverseList(num2);
        Node* dummy=new Node(-1);
        Node* curr=dummy;
        int rem=0;
        while(h1!=NULL || h2!=NULL || rem!=0){
            int sum=rem;
            if(h1){
                sum+=h1->data;
                h1=h1->next;
            }
            if(h2){
                sum+=h2->data;
                h2=h2->next;
            } 
            Node* newnode=new Node(sum%10);
            rem=sum/10;
            curr->next=newnode;
            curr=newnode;
            
        }
        
        Node* head=dummy->next;
        dummy->next=NULL;
        Node* newhead=reverseList(head);
        while(newhead!=NULL && newhead->data==0){
            newhead=newhead->next;
        }
        return newhead;
    }
};