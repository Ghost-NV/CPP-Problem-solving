#include <iostream>
#include <string>

using namespace std;

int getCount(const string &inputStr)
{
  int num_vowels = 0;
  for (char c : inputStr)
  {
    if (c == 'a' || c == 'o' || c == 'u' || c == 'i' || c == 'e')
    {
      num_vowels++;
    }
  }
  return num_vowels;
}

int main()
{
  cout << getCount("HeelOlo");
  return 0;
}