#include <iostream>
using namespace std;

int main()
{
  // For Loop
  for (int i = 0; i < 11; i++)
  {
    cout << i << "\n";
  }

  // While Loop
  int i = 0;
  while (i < 11)
  {
    cout << i << "\n";
    i++;
  }

  //Do While
  int i = 0;
  do
  {
    cout << i << "\n";
    i++;
  } while (i < 11);

  return 0;
}
/*
Output
  0
  1
  2
  3
  4
  5
  6
  7
  8
  9
  10
*/