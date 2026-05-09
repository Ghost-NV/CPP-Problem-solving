#include <iostream>

int makeNegative(int num)
{
  if (num > 0)
  {
    num *= -1;
  }
  return num;
}
// or : return num > 0 ? -num : num; (same)
// another weird soultion : return -abs(num);

int main()
{
  std::cout << makeNegative(-10);
  return 0;
}