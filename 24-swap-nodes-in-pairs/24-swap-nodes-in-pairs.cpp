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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL)
            return head;
        ListNode* retHead = head -> next;
        ListNode* curr = head;
        ListNode* temp;
        ListNode* dummyNode = new ListNode();
        dummyNode -> next = head;
        ListNode* prev = dummyNode;
        
        while(curr != NULL){
            if(curr -> next == NULL) break;
            prev -> next = curr -> next;
            prev = prev -> next;
            temp = curr;
            curr = prev -> next;
            prev -> next = temp;
            temp -> next = curr;
            prev = prev -> next;
        }
        return dummyNode -> next;
    }
};