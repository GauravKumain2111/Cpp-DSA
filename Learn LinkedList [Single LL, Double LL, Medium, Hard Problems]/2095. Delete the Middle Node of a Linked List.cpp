/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL||head==NULL){
            return NULL;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        fast=fast->next->next;
        while(fast&&fast->next!=NULL){
            fast=fast->next->next;
           
            slow=slow->next;
        }
        ListNode* middle=slow->next;
        slow->next=slow->next->next;
        delete middle;
        return head;
        

    }
};
