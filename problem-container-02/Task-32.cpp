#include <iostream>
#include <vector>
#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values)
{
  // values.first = values.second;
  // values.second = values.first;
  std::vector<int> nums = {};
  nums.push_back(values.second);
  nums.push_back(values.first);
  return {nums.at(0), nums.at(1)};
}
// solution : std::swap(values.first, values.second); return values;
// solution :
/*
  int alt = values.first;
  values.first = values.second;
  values.second = alt;
  return values;
*/
// solution : return {values.second,values.first};

int main()
{
  std::pair<int, int> result = swap_values({10, 20});
  std::cout << result.first << " " << result.second; // 20 10
  return 0;
}