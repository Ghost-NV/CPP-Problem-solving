#include <iostream>
#include <string>

std::string correct(std::string str)
{
  for (int i = 0; i < str.size(); i++)
  {
    if (str.at(i) == '0')
    {
      str.at(i) = 'O';
    }
    else if (str.at(i) == '1')
    {
      str.at(i) = 'I';
    }
    else if (str.at(i) == '5')
    {
      str.at(i) = 'S';
    }
    // switch (str.at(i))
    // {
    // case '0':
    //   str.at(i) = 'O';
    //   break;
    // case '1':
    //   str.at(i) = 'I';
    //   break;
    // case '5':
    //   str.at(i) = 'S';
    //   break;
    // default:
    //   break;
    // }
  }
  return str;
}

int main()
{
  std::cout << correct("50 Here 15 The code");
  return 0;
}