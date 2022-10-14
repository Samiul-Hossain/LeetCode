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
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL){
            temp = temp->next;
            size++;
        }
        if(size == 0)
            return head;
        if(size == 1)
            return head->next;
        int midNode = size/2;
        ListNode* temp1 = head;
        int n = 1;
        while(n!=midNode){
            temp1 = temp1->next;
            n++;
        }
        temp1->next = temp1->next->next;
        return head;
    }
};