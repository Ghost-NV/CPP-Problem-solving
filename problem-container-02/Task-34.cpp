#include <iostream>
using namespace std;

bool hero(int bullets, int dragons)
{
  return bullets / 2 >= dragons;
}

int main()
{
  cout << hero(12, 6);
  return 0;
}