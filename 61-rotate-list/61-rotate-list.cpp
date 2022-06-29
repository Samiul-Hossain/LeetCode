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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* it = head;
        int len = 0;
        while(it != NULL){
            len += 1;
            it = it -> next;
        }
        if(k>len)
            k = k%len;
        for(int i=0; i<k; i++){
            ListNode* slow = head;
            ListNode* fast = head -> next;
            while(fast -> next != NULL){
                fast = fast -> next;
                slow = slow -> next;
            }
            fast -> next = head;
            head = fast;
            slow -> next = NULL;
        }
        return head;
    }
};