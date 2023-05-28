#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  cout << "First: " << nums[0] << "\n";
  cout << "Last: " << nums[5] << "\n";
/*
Output Method 1
  "First: 10"
  "Last: 50"
*/

  cout << "============\n";

  cout << "First: " << nums.at(0) << "\n";
  cout << "Last: " << nums.at(5) << "\n";
/*
Output Method 2
  "First: 10"
  "Last: 50"
*/

  cout << "============\n";

  cout << "First: " << nums.front() << "\n";
  cout << "Last: " << nums.back() << "\n";
/*
Output Method 3
  "First: 10"
  "Last: 50"
*/
  return 0;
}