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
    bool isPalindrome(ListNode* head) {
      if (head == NULL) return true;
        int i;
        stack<int> s;
        ListNode* p = head, *q = head;
        while(p)
            {
            s.push(p->val);
            p = p->next;
            ++i;
        }
        i = i/2;
        while (!s.empty() && i--)
            {
            if (s.top() == q->val)
                {
                s.pop();
                q = q->next;
            }
            else
            return false;
        }
        return true;
         
         
    }
};