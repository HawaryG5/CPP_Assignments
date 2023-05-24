#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit Here
  short a = 1000;
  int b = 10000;
  long double c = 5.560000505012;

  // Change ??? To Something Else To Get The Output
  cout << sizeof(c) - sizeof(b) << "\n";
  cout << sizeof(c) + sizeof(b) << "\n";
  cout << sizeof(c) * sizeof(a) << "\n";
  cout << a * int(c) << "\n";
  cout << char(sizeof(c) * int(c)) << "\n"; 
  return 0;
}
/*
Output
  12
  20
  32
  5000
  P => ASCII => 80
*/