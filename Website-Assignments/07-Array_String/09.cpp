#include <iostream>
using namespace std;

int main()
{
  int nums[] = {10, 20, 30, 40, 20, 50};

  // Method 1
  cout << size(nums) << "\n";              // 6

  // Method 2
  cout << sizeof(nums) / 4 << "\n";        // 6

  // Method 3
  cout << end(nums) - begin(nums) << "\n"; // 6
  return 0;
}