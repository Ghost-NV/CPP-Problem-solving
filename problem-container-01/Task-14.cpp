#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int litres(double time)
{
  return time / 2;
  // another soultion : return time * 0.5;
}

int main()
{
  cout << litres(6.2);
}