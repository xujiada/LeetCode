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
    ListNode* reverseList(ListNode* head) {
       if(head == NULL) return head;
       stack<int> node;
       ListNode* l = head;
       while(l)
       {
           node.push(l->val);
           l = l->next;
       }
       l = head;
       while(node.size())
       {
           l->val = node.top();
           l = l->next;
           node.pop();
       }
       return head;
    
    }
};