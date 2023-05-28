#include <iostream>
using namespace std;

int main()
{
  // Example 1
  int vals[]{100, 200, 250, 400, 200};

  // Example 2
  int vals[]{100, 200, 500, 400, 200};

  // Example 3
  int vals[]{100, 200, 600, 400, 200};

  if (vals[0] + vals[4] > vals[2])
  {
    cout << "First Number + Last Number Is Larger Than Middle Number\n";
    cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << "\n";
    cout << vals[0] + vals[4] << " > " << vals[2] << "\n";
  }
  else if (vals[1] + vals[3] > vals[2])
  {
    cout << "Second Number + Before Last Number Is Larger Than Middle Number\n";
    cout << vals[1] << " + " << vals[3] << " = " << vals[1] + vals[3] << "\n";
    cout << vals[1] + vals[3] << " > " << vals[2] << "\n";
  }
  else
  {
    cout << "Middle Number Is The Largest\n";
    cout << vals[2] << "\n";
  }

  return 0;
}
/*
Output Example 1
  "First Number + Last Number Is Larger Than Middle Number"
  "100 + 200 = 300"
  "300 > 250"

Output Example 2
  "Second Number + Before Last Number Is Larger Than Middle Number"
  "200 + 400 = 600"
  "600 > 500"

Output Example 3
  "Middle Number Is The Largest"
  "600"
*/