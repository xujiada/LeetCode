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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		int i = 0;
		ListNode* p = head;
		ListNode* q = head;
		ListNode* q2 = q;
		for (; i < n - 1; i++)
			p = p->next;
		while (p->next)
		{
			q2 = q;
			q = q->next;
			p = p->next;
		}
		if (q == head)   //差了这一步导致错误
		{
			head = head->next;
			free(q);
		}
		else{
			q2->next = q->next;
			free(q);
		}
		return head;
	}
};