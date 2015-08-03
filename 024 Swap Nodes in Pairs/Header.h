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
    ListNode* swapPairs(ListNode* head) {
        if (!head) { return NULL; }
        ListNode * dom=new ListNode(0);
        dom->next=head;
        ListNode* temp = dom;
        ListNode* next = NULL;
        ListNode* p = head;
        ListNode* q = head->next;
        while(p && q)
        {
            next = q->next;
            temp->next = q;
            q->next = p;
            p->next = next;
            temp = p;
            p = next;
            if(!p) break;
            q = p->next;
         //   temp = p->next;
          // p->next = q->next;
          //  q->next = temp;
          //  p = p->next;
          //  q = q->next;
        }
        return dom->next;
    }
};