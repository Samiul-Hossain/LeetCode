/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int arr[999999] = {0};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL)
            return false;
        ListNode *slow = head;
        bool ret = false;
        while(head != NULL && head -> next != NULL){
            head = head -> next -> next;
            slow = slow -> next;
            if(head == slow){
                ret = true;
                break;
            }
        }
        return ret;
    }
};