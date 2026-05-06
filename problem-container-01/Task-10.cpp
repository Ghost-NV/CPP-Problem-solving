#include <iostream>
#include <string>
using namespace std;

std::string removeExclamationMarks(std::string str)
{
  std::string result;
  for (int i = 0; i < str.size(); i++)
  {
    if (str.at(i) != '!')
    {
      result += str.at(i);
    }
  }
  return result;
}

int main()
{
  std::cout << removeExclamationMarks("HELKLK!!KK!");
  return 0;
}