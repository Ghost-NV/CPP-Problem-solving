#include <iostream>
using namespace std;

int main()
{
  int year;
  cin >> year;
  if (year % 100 == 0)
  {
    cout << year / 100;
  }
  else
  {
    cout << (year / 100) + 1; // or use ceil() function
  }
  return 0;
}