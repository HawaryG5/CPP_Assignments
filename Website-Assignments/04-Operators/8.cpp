#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  cout << --num << " | " << num++ << " | " << ++num << "\n";
  cout << num << " | " << ++num << " | " << num << "\n";
  cout << --num << " | " << --num << " | " << --num << "\n";
  return 0;
}
/*
Output
  9 | 9 | 11
  11 | 12 | 12
  11 | 10 | 9
*/