#include <iostream>
#include "strutils.hpp"

int main(int argc, char** argv) {
  std::cout << "Enter the equation to balance: ";
  std::string equationStr;
  std::getline(std::cin, equationStr);
  std::cout << equationStr << "\n";
  std::cout << bracketsBalanced(equationStr) << "\n";
  return 0;
}
