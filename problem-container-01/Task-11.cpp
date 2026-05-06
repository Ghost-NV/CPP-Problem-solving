#include <iostream>
#include <string>

std::string string_to_number(const std::string &s)
{
  std::string result;
  for (int i = 0; i < s.size(); i++) // same as Task-10
  {
    if (s.at(i) != '"')
    {
      result += s.at(i);
    }
  }
  return result;
}

int main()
{
  std::cout << string_to_number("556563");
  return 0;
}

// ### another way

// int string_to_number(const std::string &s)
// {
//   return std::stoi(s);
// }

// STOi	"String TO Integer"
// STOl	"String TO Long"
// STOll	"String TO Long Long"
// STOf	"String TO Float"
// STOd	"String TO Double"
// STOld	"String TO Long Double"