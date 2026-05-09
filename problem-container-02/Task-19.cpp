#include <iostream>
using namespace std;

// ! failed
// ? instructor code :

int past(int h, int m, int s)
{
  int oneS = 1000;
  int oneM = 60 * oneS;
  int oneH = 60 * oneM;
  return (oneH * h) + (oneM * m) + (oneS * s);
}
// another logical solution : return 1000*(s + m*60 + h*60*60); or return h*3600000+m*60000+s*1000;

int main()
{
  cout << past(0, 1, 1);
  return 0;
}

// h = 0
// m = 1
// s = 1
// result = 61000

// 0 <= h <= 23
// 0 <= m <= 59
// 0 <= s <= 59
