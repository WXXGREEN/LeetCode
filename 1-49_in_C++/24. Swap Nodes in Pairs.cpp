#include "Solution.hpp"

/*Given a linked list, swap every two adjacent nodes and return its head.
For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.
Your algorithm should use only constant space. You may not modify the values in
the list, only nodes itself can be changed.*/

ListNode *Solution::swapPairs(ListNode *head) {
  if (head == NULL)
    return NULL;
  if (head->next == NULL)
    return head;
  ListNode *p1 = head, *p2 = head->next;
  int tmp;
  while (p1 != NULL && p2 != NULL) {
    tmp = p1->val;
    p1->val = p2->val;
    p2->val = tmp;
    if (p1->next == NULL || p2->next == NULL)
      break;
    else {
      p1 = p1->next->next;
      p2 = p2->next->next;
    }
  }
  return head;
}
