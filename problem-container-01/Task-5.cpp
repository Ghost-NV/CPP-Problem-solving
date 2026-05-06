#include <iostream>
#include <vector>
#include <string>
using namespace std;

string reverse_text(string text)
{
  string result = "";
  for (int i = text.length() - 1; i >= 0; i--)
  {
    result += text[i];
  }
  return result;
}

int main()
{
  cout << reverse_text("Hello") << "\n";
  cout << reverse_text(reverse_text("Hello")) << "\n";
  cout << reverse_text(reverse_text(reverse_text("Hello")));
  return 0;
}