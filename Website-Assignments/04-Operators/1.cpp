#include <iostream>
using namespace std;

int main()
{
  int num = 3;
  cout << num + num << "\n";
  cout << num * num - num << "\n";
  cout << (num * num) - num << "\n";
  cout << (num + num + num) - num << "\n";
  cout << (num - num) + (num + num) << "\n";
  cout << (num > num) + (num + num) << "\n";
  cout << (num + num) * (num / num) << "\n";
  return 0;
}
/*
Output
  6
  6
  6
  6
  6
  6
  6
*/