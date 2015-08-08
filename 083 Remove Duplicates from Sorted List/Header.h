/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        while(p && p->next != NULL){
            ListNode* q = p->next;
            if(p->val == q->val){
                p->next = q->next;
                free(q);
            }
        else
            p = p->next;
        }
        return head; //return head错写成return p
    }
};