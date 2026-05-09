#include <iostream>
#include <cmath>
#include <vector>

int square_sum(const std::vector<int> &numbers)
{
  int x = 0;
  for (int i = 0; i < numbers.size(); i++)
  {
    x += numbers.at(i) * numbers.at(i);
  }
  /* --- or use ranged loop ---
    for(int x : numbers) {
      result += x * x;
    }
  */
  return x;
}

int main()
{
  std::cout << square_sum({10, 20});
  return 0;
}