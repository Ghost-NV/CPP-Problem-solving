#include <iostream>
using namespace std;

void divideTs(int a, int b, int c)
{
  if (a % b == 0 && a % c == 0)
  {
    cout << a << " is dividable on: " << b << " and " << c << "\n";
  }
  else
  {
    cout << a << " is NOT dividable on: " << b << " and " << c << "\n";
  }
}

int main()
{
  divideTs(10, 5, 2);
  cout << "hello there!!";
  return 0;
}