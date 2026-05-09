#include <iostream>

int odd_count(int n)
{
  int x = 0;
  for (int i = 0; i < n; i++) // problem in performance
  {
    if (i % 2 != 0 && i > 0)
    {
      x++;
    }
  }
  return x;
}
// or just do : return n / 2; !!!!!!!!!!!!!!!

int main()
{
  std::cout << odd_count(6);
  return 0;
}