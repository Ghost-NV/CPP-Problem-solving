#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min(vector<int> list)
{
  int result = list.at(0);
  for (int i = 1; i < list.size(); i++)
  {
    if (result > list.at(i))
    {
      result = list.at(i);
    }
  }
  return result;
}
// another way : 	return *(min_element(list.begin(), list.end())); // requers #include <algorithm>

int max(vector<int> list)
{
  int result = list.at(0);
  for (int i = 1; i < list.size(); i++)
  {
    if (result < list.at(i))
    {
      result = list.at(i);
    }
  }
  return result;
}
// another way : 	return *(max_element(list.begin(), list.end())); // requers #include <algorithm>

// another existed and nice way
int minimini(vector<int> numbers)
{
  int result = numbers.at(0);
  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers.at(i) < result)
    {
      result = numbers.at(i);
    }
  }
  return result;
}

int maximaxi(vector<int> numbers)
{
  int result = numbers.at(0);
  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers.at(i) > result)
    {
      result = numbers.at(i);
    }
  }
  return result;
}

int main()
{
  cout << minimini({10, 20, 30, 20, -13, 56, 134}) << "\n";
  cout << maximaxi({10, 20, 30, 20, -13, 56, 134}) << "\n";
  cout << min({10, 20, 30, 20, -13, 56, 134}) << "\n";
  cout << max({10, 20, 30, 20, -13, 56, 134}) << "\n";

  return 0;
}