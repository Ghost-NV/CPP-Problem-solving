#include <iostream>
int getRealFloor(int f)
{
  if (f < 13 && f <= 0)
  {
    return f;
  }
  else if (f < 13 && f > 0)
  {
    return f - 1;
  }
  else if (f > 13)
  {
    return f - 2;
  }
  return 0;
}

int main()
{
  std::cout << getRealFloor(16);
  return 0;
}