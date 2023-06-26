#include <iostream>
using namespace std;

int main()
{
  // For Loop
  for (int i= 0; i < 20; i+=2)
  {
    if (i != 10 && i != 12)
    {
      cout << i << "\n";
    }
  }

   // While Loop
  int i = 0;
  while (i < 20)
  {
    if (i != 10 && i != 12)
    {
      cout << i << "\n";
    }
    i+=2;
  }

  return 0;
}
/*
Output Needed
0
2
4
6
8
14
16
18
*/