#include <iostream>
using namespace std;

int main()
{
  int num = 2;
  // For Loop
  for (int i = 0; i < 6; i++)
  {
    cout << num << "\n";
    num = num * 2 + 2;
  }

  // While Loop
  int i = 0;
  while (i < 6)
  {
    cout << num << "\n";
    num = num * 2 + 2;
    i++;
  }

  return 0;
}
/*
Output Needed
2
6
14
30
62
126
*/