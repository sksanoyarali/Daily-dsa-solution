/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        Node * temp=head;
        map<Node *,Node *> mpp;
        while(temp!=NULL){
            Node * newnode=new Node(temp->data);
            mpp[temp]=newnode;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            Node * copynode=mpp[temp];
            copynode->next=mpp[temp->next];
            copynode->random=mpp[temp->random];
            temp=temp->next;
        }
        return mpp[head];
    }
};