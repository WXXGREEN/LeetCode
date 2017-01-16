#include "Solution.hpp"

/*Given a linked list, remove the nth node from the end of list and return its
head.

For example,
   Given linked list: 1->2->3->4->5, and n = 2.
   After removing the second node from the end, the linked list becomes
1->2->3->5.

Note:
Given n will always be valid.
Try to do this in one pass.*/

/*two pass,time over*/

ListNode *Solution::removeNthFromEnd(ListNode *head, int n) {
  if (head == NULL)
    return head;
  ListNode *p = head->next, *prev = head->next;
  int length = 0;
  // cout << p->next->next->next->next->val;
  while (p != NULL) {
    length++;
    p = p->next;
    // cout << "+";
  }
  p = head->next;
  // cout << length << endl;
  if (n > length)
    return head;
  for (int i = 1; i <= length - n; i++) {
    p = p->next;
  }
  // while (p->next != NULL) {
  //   p = p->next;
  //   q = q->next;
  // }
  while (prev->next != p)
    prev = prev->next;

  prev->next = p->next;
  delete p;

  return head;

  // /*one pass*/
  // ListNode *dummy = new ListNode(0);
  // dummy->next = head;
  // ListNode *first = dummy, *second = dummy;
  //
  // for (int i = i; i <= n + 1; i++)
  //   first = first->next;
  //
  // while (first != NULL) {
  //   first = first->next;
  //   second = second->next;
  // }
  //
  // first->next = first->next->next;
  //
  // return dummy->next;
}
