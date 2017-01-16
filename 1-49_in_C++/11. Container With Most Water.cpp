#include "Solution.hpp"

/*Given n non-negative integers a1, a2, ..., an, where each represents a point
at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of
line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis
forms a container, such that the container contains the most water.

Note: You may not slant the container.*/
/*设置首尾两个指针，移动指向短板的指针，因为宽度的减小可以由高度的（增加）来补偿，这样就可能找到最大的面积*/

int Solution::maxArea(vector<int> &height) {
  int left = 0, right = height.size() - 1;
  int maxArea = 0;
  while (left < right) {
    maxArea = max(maxArea, min(height[left], height[right]) * (right - left));
    if (height[left] < height[right])
      left++;
    else
      right--;
  }
  return maxArea;
}
