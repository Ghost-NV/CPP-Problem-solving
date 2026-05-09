#include <iostream>
using namespace std;

string to_alternating_case(const string &str)
{
  string alt;
  for (int i = 0; i < str.size(); i++)
  {
    if (isupper(str.at(i)))
    {
      alt += tolower(str.at(i));
    }
    else if (islower(str.at(i)))
    {
      alt += toupper(str.at(i));
    }
    else
    {
      alt += str.at(i);
    }
  }
  return alt;
}
// ###### clever soultion (1) :
/*
string to_alternating_case(string str)
{
  for(auto& ch : str)
  {
    ch = islower(ch) ? toupper(ch) : tolower(ch);
  }
  return str;
}
*/

// ###### clever soultion (2) :
/*
#include <string>
string to_alternating_case(string str)
{
  for (char &c : str)
  {
    if (c >= 'a' && c <= 'z')
    {
      c += 'A' - 'a';
    }
    else if (c >= 'A' && c <= 'Z')
    {
      c -= 'A' - 'a';
    }
  }
  return str;
}
*/

// ###### WTF soultion (2) :
/*
std::string to_alternating_case(std::string str)
{
  for (auto & e : str)
    if (isalpha(e))
      e ^= 32;
  return str;
}
*/

int main()
{
  cout << to_alternating_case("HeLl O");
  return 0;
}