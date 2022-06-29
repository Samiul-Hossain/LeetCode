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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* p = head;
        int l = 0;
        while(p != NULL){
            l++;
            p = p -> next;
        }
        int i = 0;
        while(i<l/2){
            i++;
            head = head -> next;
        }
        return head;
    }
};