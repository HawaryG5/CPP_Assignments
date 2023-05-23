#include <iostream>
using namespace std;

int main()
{
  double salary = 5000.98;
  cout << sizeof(salary) << "\n";
  cout << sizeof(salary) * 8 << "\n";
  return 0;
}
/*
Output
  8 Bytes
  64 Bits
*/