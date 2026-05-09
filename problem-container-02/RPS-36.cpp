#include <iostream>
#include <string>
using namespace std;

// scissors , rock , paper
string rps(const string &p1, const string &p2)
{
  string msg = "";
  string msgp1 = "Player 1 won!";
  string msgp2 = "Player 2 won!";
  string draw = "Draw!";
  if (p1 == p2)
  {
    return draw;
  }
  if (p1 != p2)
  {
    if (p1 == "scissors") // condition 1
    {
      if (p2 == "rock")
      {
        return msgp2;
      }
      if (p2 == "paper")
      {
        return msgp1;
      }
    }
    if (p1 == "rock") // condition 2
    {
      if (p2 == "paper")
      {
        return msgp2;
      }
      if (p2 == "scissors")
      {
        return msgp1;
      }
    }
    if (p1 == "paper") // condition 3
    {
      if (p2 == "scissors")
      {
        return msgp2;
      }
      if (p2 == "rock")
      {
        return msgp1;
      }
    }
  }
  return msg;
}
// another nice soultion
/*
  if(p1 == p2)
    return "Draw!";
  if( ( p1[0] == 's' && p2[0] == 'p' )||
      ( p1[0] == 'p' && p2[0] == 'r' )||
      ( p1[0] == 'r' && p2[0] == 's' ) )
      return "Player 1 won!";
  return "Player 2 won!";
*/

int main()
{
  cout << rps("scissors", "rock");
  return 0;
}