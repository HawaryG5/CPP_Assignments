#include <iostream>
using namespace std;

int main()
{
  // Test Case 1
  int age = 18;
  int points = 450;

  // Test Case 2
  // int age = 20;
  // int points = 450;

  // Test Case 3
  // int age = 20;
  // int points = 650;

  if (age > 18)
  {
    cout << "Yes Age Is Ok\n";
    if (points > 500)
    {
      cout << "Yes Points Is Ok\n";
    }
    else
    {
      cout << "No Points Is Not Ok\n";
    }
  }
  else
  {
    cout << "No Age Is Not Ok\n";
    if (points > 500)
    {
      cout << "Yes Points Is Ok\n";
    }
    else
    {
      cout << "No Points Is Not Ok\n";
    }
  }
  return 0;
}
/*
Output Case 1
  "No Age Is Not Ok"
  "No Points Is Not Ok"

Output Case 2
  "Yes Age Is Ok"
  "No Points Is Not Ok"

Output Case 3
  "Yes Age Is Ok"
  "Yes Points Is Ok"
*/