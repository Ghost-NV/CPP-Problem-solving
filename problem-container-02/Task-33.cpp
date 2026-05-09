#include <iostream>
#include <string>
using namespace std;

std::string people_with_age_drink(int age)
{
  if (age < 14)
    return "drink toddy";
  if (age < 18)
    return "drink coke";
  if (age < 21)
    return "drink beer";
  return "drink whisky";
}
// YOU WON'T DRINK ANY OF THEM!!

int main()
{
  cout << people_with_age_drink(30);
  return 0;
}