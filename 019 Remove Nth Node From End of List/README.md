Given a linked list, remove the nth node from the end of list and return its head.<br>

For example,<br>

   Given linked list: 1->2->3->4->5, and n = 2.<br>

   After removing the second node from the end, the linked list becomes 1->2->3->5.<br>
Note:<br>
Given n will always be valid.<br>
Try to do this in one pass.<br>

关于链表的题目，主要是要考虑到各种可能的情况：<br>
      if(q == head)   //差了这一步导致错误<br>
        {<br>
            head = head->next;<br>
            free(q);<br>
        }<br>
