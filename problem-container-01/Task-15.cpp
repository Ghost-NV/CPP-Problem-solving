#include <iostream>
#include <string>
using namespace std;

string sliceString(string str)
{
  string result;
  for (int i = 1; i < str.size() - 1; i++) // same as Task-10
  {
    result += str.at(i);
  }
  return result;
}
// another solution : return str.substr(1, str.size() - 2);

int main()
{
  cout << sliceString("hello");
  return 0;
}