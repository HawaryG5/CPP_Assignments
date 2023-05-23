#include <iostream>
using namespace std;

int main()
{
  char a = '~';
  char b = '&';
  char c = '%';
  char d = 'A';
  cout << "ASCII Value of ~ Is " << int(a) << "\n"; // 126
  cout << "ASCII Value of & Is " << int(b) << "\n"; // 38
  cout << "ASCII Value of % Is " << int(c) << "\n"; // 37
  cout << "ASCII Value of A Is " << int(b) << "\n"; // 65
  return 0;
}
/*
Output Needed
  "ASCII Value of ~ Is 126"
  "ASCII Value of & Is 38"
  "ASCII Value of % Is 37"
  "ASCII Value of A Is 65"
*/