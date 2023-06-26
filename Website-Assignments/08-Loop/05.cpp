#include <iostream>
using namespace std;

int main()
{
  // For Loop
  for (int i = 0; i < 30; i+=3)
  {
    cout << i << "\n";
  }

  // While Loop
  int i = 0;
  while (i < 30)
  {
    cout << i << "\n";
    i+=3;
  }

  return 0;
}
/*
Output Needed
0
3
6
9
12
15
18
21
24
27
*/