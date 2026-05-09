#include <iostream>
#include <vector>

double calc_average(const std::vector<double> &values)
{
  if (values.empty())
    return 0;
  double x = 0;
  for (int i = 0; i < values.size(); i++)
  {
    x += values.at(i);
  }
  return x / values.size();
}

int main()
{
  std::cout << calc_average({10});
  return 0;
}