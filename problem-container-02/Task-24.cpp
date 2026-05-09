#include <iostream>
#include <vector>
using namespace std;

int count_sheep(vector<bool> arr)
{
  int result = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr.at(i) == true)
    {
      result++;
    }
  }
  return result;
}
// another soultion : return count(arr.cbegin(), arr.cend(), true);

int main()
{
  cout << count_sheep({true, true, true, false, true});
  return 0;
}