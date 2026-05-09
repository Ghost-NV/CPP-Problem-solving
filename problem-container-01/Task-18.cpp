#include <iostream>
#include <string>
using namespace std;

unsigned int strCount(const string &word, char letter)
{
  int result = 0;
  for (int i = 0; i < word.size(); i++)
  {
    if (word.at(i) == letter)
    {
      result++;
    }
  }
  return result;
}
// or just use count() : return count(word.begin(), word.end(), letter);
// note : also can use cbegin() & cend() instead.

int main()
{
  cout << strCount("hello", 'l');
  return 0;
}