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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* root = new ListNode();
        ListNode* current = root;
        int compare;
        int k = (int) lists.size();
        int c;
        int count;
        while(1){
            int compare = 10001;
            c = 0;
            count = 0;
            for(int i=0; i<k; i++){
                if(!lists[i]){
                    count++;
                    continue;
                }
                if(lists[i]->val < compare){
                    compare = lists[i]->val;
                    c = i;
                }
            }
            if(count == k)
                break;
            ListNode* newNode = new ListNode(compare);
            current -> next = newNode;
            current = current -> next;
            if(lists[c] -> next == NULL){
                lists[c] = NULL;
            }
            else{
                lists[c] = lists[c]->next;
            }
            count++;
        }
        return root->next;
    }
};