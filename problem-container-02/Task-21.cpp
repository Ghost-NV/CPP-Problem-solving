#include <iostream>
#include <cstdint>
bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
  if (distance_to_pump <= mpg * fuel_left)
  {
    return true;
  }
  else // no need for "else"
  {
    return false;
  }
}
// another obvious soultion : return distance_to_pump <= fuel_left * mpg;

int main()
{
  std::cout << zero_fuel(10, 5, 2);
  return 0;
}
