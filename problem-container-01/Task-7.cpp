#include <iostream>
using namespace std;

int mango(int quantity, int price)
{
  int quant = quantity;
  int decreased = quantity / price;
  quant -= decreased;
  int result = quant * price;
  return result;
}

int main()
{
  cout << mango(2, 3) << "\n";
  cout << mango(3, 3) << "\n";
  cout << mango(4, 3) << "\n";
  cout << mango(5, 3) << "\n";
  cout << mango(6, 3) << "\n";
  cout << mango(7, 3) << "\n";
  return 0;
}