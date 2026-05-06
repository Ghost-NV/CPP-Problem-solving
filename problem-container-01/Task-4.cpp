#include <iostream>
using namespace std;

string Odd_Even(int a)
{
  if (a % 2 == 0)
  {
    cout << a << " is Even " << "\n";
  }
  else
  {
    cout << a << " is Odd " << "\n";
  }

  return "";
}

int main()
{
  Odd_Even(3);
  return 0;
}