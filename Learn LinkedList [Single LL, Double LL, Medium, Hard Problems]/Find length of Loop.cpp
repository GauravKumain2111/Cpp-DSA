/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    // Write your code here
    Node*slow = head;
    Node*fast = head;
    Node*entry =head;
    while(fast&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    int length = 1;
        if(slow==fast){
         fast=fast->next;
         while(slow!=fast){
             length++;
             fast=fast->next;
         }
         return length;

            
        }
    }
    return 0;
}
