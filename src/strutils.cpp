#include "strutils.hpp"
#include <stack>


bool bracketsBalanced(const std::string& input) {
  std::stack<char> bracketStack;

  for (char c : input) {
    if (c == '(') {
      bracketStack.push(c);
    } else if (c == ')') {
      if (!bracketStack.empty() && bracketStack.top() == '(') {
	bracketStack.pop();
      } else {
	return false;
      }
    }
  }

  return bracketStack.empty();
}
