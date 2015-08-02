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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      
       if ( l1 && !l2) return l1;
       if (!l1 &&  l2) return l2;
        if(l1 == NULL && l2 == NULL)
        return NULL;
       //ListNode* l3 = NULL; 错误的写法
       ListNode* l3 = new ListNode(0); //c++里的new的写法
      // ListNode* l3 = (ListNode*)malloc(sizeof(ListNode* )); //c语言写法
       ListNode* l = l3;
       while(l1&&l2)
       {
           if(l1->val <= l2->val)
           {
                ListNode* temp = new ListNode(l1->val);
                l->next = temp;
                l = temp;
                l1 = l1->next;
           }
           else
           {
                ListNode* temp = new ListNode(l2->val);
                l->next = temp;
                l = temp;
                l2 = l2->next;
           }
       }
       if(l1&&!l2)
           l->next = l1;
       if(l2&&!l1)
           l->next = l2;
       return l3->next;
    }
};