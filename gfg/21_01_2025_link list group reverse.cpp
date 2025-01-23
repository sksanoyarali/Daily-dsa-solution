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

    Node* findKthNode(Node* temp, int k) {
        while (temp != NULL && k > 1) {
            k--;
            temp = temp->next;
        }
        return temp;
    }

public:
    Node* reverseKGroup(Node* head, int k) {
        Node* temp = head;
        Node* prevlast = NULL; 
        Node* newHead = NULL;

        while (temp) {
            Node* kthnode = findKthNode(temp, k); 
            if (kthnode == NULL) {
                Node* reversedTail = reverseList(temp);
                if (prevlast) {
                    prevlast->next = reversedTail;
                } else {
                    newHead = reversedTail;
                }
                break;
            }

            Node* nextnode = kthnode->next; 
            kthnode->next = NULL;          

            Node* reversedHead = reverseList(temp);

            if (newHead == NULL) {
                newHead = reversedHead; 
            } else {
                prevlast->next = reversedHead;
            }
            prevlast = temp;
            temp = nextnode;
        }

        return newHead;
    }
};
