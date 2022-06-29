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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL)
            return true;
        ListNode *p = head;
        ListNode *p1 = head;
        ListNode *start = head;
        ListNode *r;
        int l = 0;
        while(p != NULL){
            p = p->next;
            l++;
        }
        int i = 0;
        while(i < l/2){
            i++;
            p1 = p1 -> next;
        }
        r = reverseList(p1);
        int j = 0;
        bool ret = true;
        while(j < l/2){
            j++;
            if(start -> val != r -> val){
                ret = false;
            }
            start = start -> next;
            r = r -> next;
        }
        return ret;
    }
    
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* p = head->next;
        ListNode* q = head;
        head -> next = NULL;
        while(p!= NULL){
            head = p;
            p = p->next;
            head -> next = q;
            q = head;
        }
        return head;
    }
    
};