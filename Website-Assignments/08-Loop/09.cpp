#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

  // For Loop
  for (int i = 1; i < 3; i++)
  {
    cout << friends[i] << "\n";
  }

  // While Loop
  int i = 1;
  while(i < 3)
  {
    cout << friends[i] << "\n";
    i++;
  }

  return 0;
}
/*
Output Needed
"Mohamed"
"Sayed"
*/