#include <iostream>
using namespace std;

int main()
{
  // Example 1
  int check = 25;
  int nums[]{40, 20, 30, 70, 100};
/*
Output
  "{40} + {70} = 110"
*/

  // Example 2
  int check = 25;
  int nums[]{20, 35, 30, 70, 100};
/*
Output
  "{35} + {70} = 105"
*/

  // Example 2
  int check = 25;
  int nums[]{20, 25, 30, 70, 100};
/*
Output
  "{30} + {70} = 100"
*/

  if (nums[0] > check)
  {
    cout << "{" << nums[0] << "} + ";
    cout << "{" << nums[3] << "} = ";
    cout << nums[0] + nums[3] << "\n";
  }
  else if (nums[1] > check)
  {
    cout << "{" << nums[1] << "} + ";
    cout << "{" << nums[3] << "} = ";
    cout << nums[1] + nums[3] << "\n";
  }
  else if (nums[2] > check)
  {
    cout << "{" << nums[2] << "} + ";
    cout << "{" << nums[3] << "} = ";
    cout << nums[2] + nums[3] << "\n";
  }

  return 0;
}
