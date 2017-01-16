#include "Solution.hpp"

/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid.
The brackets must close in the correct order, "()" and "()[]{}" are all valid
but "(]" and "([)]" are not.*/

bool Solution::isValid(string s) {
  stack<char> stack;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
      stack.push(s[i]);
      continue;
    }
    char c;
    switch (s[i]) {
    case ')':
      c = '(';
      break;
    case '}':
      c = '{';
      break;
    case ']':
      c = '[';
      break;
    }
    if (!stack.empty() && c == stack.top())
      stack.pop();
    else
      return false;
  }
  return stack.empty();
}
