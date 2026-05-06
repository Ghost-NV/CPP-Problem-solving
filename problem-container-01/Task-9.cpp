#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> invert(vector<int> values);
int main()
{
  vector<int> values = {1, 2, 3, 4, 5};
  for (int i = 0; i < values.size(); i++)
  {
    values.at(i) *= -1;
    cout << values.at(i) << " ";
  }
  return 0;
}

// another soultion : requiers #include <algorithm>
/*
vector<int> invert(vector<int> values)
{
  transform(values.begin(), values.end(), values.begin(), negate<int>());
  return values;
}
*/
// ### explanation : Transform each element in this vector starting...
// std::transform(
// ints.begin(),        // ... from the beginning of my vector
// ints.end(),          // ... to the end of it,
// ints.begin(),        // ... writing the result back into the same vector,
// square_int           // ... and transforming each int into its square.
// );

// [1, 2, 3, 4, 5] --> [-1, -2, -3, -4, -5]
// [1, -2, 3, -4, 5] --> [-1, 2, -3, 4, -5]