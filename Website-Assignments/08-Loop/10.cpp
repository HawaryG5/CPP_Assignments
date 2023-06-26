#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

  // For Loop
  for (int i = 0; i < 5; i++)
  {
    if (friends[i][0] == 'A')
    {
      cout << friends[i] << "\n";
    }
  }

  // While Loop
  int i = 0;
  while (i < 5)
  {
    if (friends[i][0] == 'A')
    {
      cout << friends[i] << "\n";
    }
    i++;
  }

  return 0;
}
/*
Output Needed
"Ahmed"
"Ashraf"
"Amany"
*/