#include <iostream>

int basicOp(char op, int val1, int val2)
{
  switch (op)
  {
  case '+':
    return val1 + val2;
  case '-':
    return val1 - val2;
  case '*':
    return val1 * val2;
  case '/':
    return val1 / val2;
  default:
    return 0;
  }
}

int main()
{
  std::cout << basicOp('+', 10, 20);
  return 0;
}