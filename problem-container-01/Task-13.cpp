#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int grow(vector<int> nums)
{
  int result = 1;
  for (int i = 0; i < nums.size(); i++)
  {
    result *= nums.at(i);
  }
  return result;
}

int main()
{
  cout << grow({10, 20});
  return 0;
}