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
    void deleteNode(ListNode* node) {
        if(!node) return;
        if(node->next != NULL) {
            ListNode* p = node->next;
            node->val = p->val;
            node->next = p->next;
            
            free(p);
        }
        
    }
};