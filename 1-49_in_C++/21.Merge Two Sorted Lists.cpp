#include "Solution.hpp"

/*Merge two sorted linked lists and return it as a new list. The new list should
 * be made by splicing together the nodes of the first two lists.*/

ListNode *Solution::MergeTwoLists(ListNode *l1, ListNode *l2) {
  if (l1 == NULL && l2 == NULL)
    return NULL;
  if (l1 == NULL)
    return l2;
  if (l2 == NULL)
    return l1;
  ListNode *p1 = l1, *p2 = l2;
  ListNode *l3 = new ListNode(0);
  ListNode *p3 = l3;

  while (p1 != NULL && p2 != NULL) {
    if (p1->val < p2->val) {
      p3->next = p1;
      p1 = p1->next;
    } else {
      p3->next = p2;
      p2 = p2->next;
    }
    p3 = p3->next;
  }
  if (p1 == NULL) {
    p3->next = p2;
  }
  if (p2 == NULL) {
    p3->next = p1;
  }
  return l3->next;
}
