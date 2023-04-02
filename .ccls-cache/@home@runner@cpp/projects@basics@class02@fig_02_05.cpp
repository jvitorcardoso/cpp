#include <iostream>

int main() {
  int number1, number2;

  std::cout << "Enter first integer: ";
  std::cin >> number1;

  std::cout << "Enter second integer: ";
  std::cin >> number2;

  int sum = number1 + number2;

  std::cout << "You typed " << number1 << " and " << number2 << std::endl;
  std::cout << "Sum is " << sum << std::endl;

  return 0;
}