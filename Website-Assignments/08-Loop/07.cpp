#include <iostream>
using namespace std;

int main()
{
  // For Loop
  for(int i = 2; i < 256; i*=2)
  {
    cout << i << "\n";
  }

  // While Loop
  int i = 2;
  while (i < 256)
  {
    cout << i << "\n";
    i*=2;
  }

  return 0;
}
/*
Output Needed
2
4
8
16
32
64
128
*/