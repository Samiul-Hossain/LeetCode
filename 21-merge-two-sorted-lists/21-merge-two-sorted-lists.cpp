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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        ListNode* lx = list1;
        if(list1->val > list2->val){
            lx = list2;
            list2 = list2->next;
        }
        else{
            list1 = list1->next;
        }
        ListNode* curr = lx;
        while(list1 && list2){
            if(list1->val > list2->val){
            curr->next = list2;
            list2 = list2->next;
        }
        else{
            curr->next = list1;
            list1 = list1->next;
        }
            curr = curr->next;
        }
        if(list1)
            curr->next = list1;
        else
            curr->next = list2;
        return lx;
    }
};