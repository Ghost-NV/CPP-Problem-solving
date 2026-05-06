#include <iostream>
#include <string>
using namespace std;

string no_space(const string &x)
{
  string result = "";
  for (int i = 0; i < x.size(); i++)
  {
    if (x.at(i) != ' ')
    {
      result += x.at(i);
    }
  }
  return result;
}

int main()
{
  cout << no_space("fn n kn h kjh ");
  return 0;
}

// another solution :
/*
string no_space(string x)
{
  x.erase(remove(x.begin(), x.end(), ' '), x.end());
  return x;
}
*/