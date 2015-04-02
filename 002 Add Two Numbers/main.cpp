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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *p = new ListNode(0);
        ListNode *l3 = p;
        int n = 0;
        while(l1 && l2)
        {
            ListNode *node = new ListNode(0);
            int temp = l1->val + l2->val + n;
            node->val = temp % 10;
            n = temp / 10;
            
            l3->next = node;
            l3 = l3->next;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1)
        {
            ListNode *node = new ListNode(0);
            int temp = l1->val + n;
            node->val = temp % 10;
            n = temp / 10;
            
            l3->next = node;
            l3 = l3->next;
            
            l1 = l1->next;
        }
        while(l2)
        {
            ListNode *node = new ListNode(0);
            int temp = l2->val + n;
            node->val = temp % 10;
            n = temp / 10;
            
            l3->next = node;
            l3 = l3->next;
            
            l2 = l2->next;
        }
        if(n != 0)
        {
            ListNode *node = new ListNode(n);
            
            l3->next = node;
            l3 = l3->next;
        }
        p = p->next;
        
        return p;
    }
};