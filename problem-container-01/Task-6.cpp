#include <iostream>
#include <string>
using namespace std;

std::string boolean_to_string(bool b)
{
  if (b)
  {
    return "true";
  }
  else
  {
    return "false";
  }
  // or use
  return b == true ? "true" : "false";
}

int main()
{
  cout << boolean_to_string(true) << "\n";
  return 0;
}