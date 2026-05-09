#include <iostream>
#include <string>

bool is_uppercase(const std::string &s)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (islower(s.at(i)))
    {
      return false;
    }
  }
  return true;
}

int main()
{
  std::cout << is_uppercase("HHH");
  return 0;
}