#include <iostream>
#include <string>
using namespace std;

string repeat_str(size_t repeat, const string &str)
{
  string result;
  for (int i = 0; i < repeat; i++)
  {
    result += str; // or use result.append(str); (this function used only with string, thought)
  }
  return result;
}

int main()
{
  cout << repeat_str(5, "*");
  return 0;
}

// another weird soultion :
/*
string repeat_str(size_t repeat, const string& str) {
  if (repeat == 1)
    return str;
  else if (repeat == 0)
    return "";
  else
    return (str+repeat_str(repeat-1, str));
}
*/