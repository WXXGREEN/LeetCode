#include "Solution.hpp"
/*Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root
node down to the nearest leaf node.*/

int Solution::minDepth(TreeNode *root) {
  if (root = NULL)
    return 0;
  int L = minDepth(root->left), R = minDepth(root->right);

  return 1 + (L && R) ? min(L, R) : max(L, R);
}
