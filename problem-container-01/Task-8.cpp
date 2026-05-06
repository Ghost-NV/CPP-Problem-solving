#include <iostream>
#include <string>
using namespace std;

void Quarter(int month_num)
{
  if (month_num > 0 && month_num < 4)
    cout << "Quarter 1";
  if (month_num > 3 && month_num < 7)
    cout << "Quarter 2";
  if (month_num > 6 && month_num < 10)
    cout << "Quarter 3";
  if (month_num > 9 && month_num < 13)
    cout << "Quarter 4";
}

// better soultion : return (month + 2) / 3;

int main()
{
  Quarter(4);
  return 0;
}