#include <iostream>
using namespace std;

int main()
{
  int result = 0;
  int num1, num2, num3, num4;
  cout << "Please Type 5 Number In A Row\n";
  cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
  cin >> num1 >> num2 >> num3 >> num4;

  if (num1 < 20 && num1 % 2 == 0)
  {
    result += num1;
  }
  if (num2 < 20 && num2 % 2 == 0)
  {
    result += num2;
  }
  if (num3 < 20 && num3 % 2 == 0)
  {
    result += num3;
  }
  if (num4 < 20 && num4 % 2 == 0)
  {
    result += num4;
  }
  cout << "Result Is: " << result << "\n";
  return 0;
}
/*
  Test Case 1
  Numbers => 15, 16, 22, 8
  Result => 24

  "Explain"
  Starting Result Is 0
  [Number 1] 15 => Not Even Number
  [Number 2] 16 => Smaller Than 20 And Even Number
  0 + 16 = 16
  [Number 3] 22 => Not Smaller Than 20
  [Number 4] 8  => Smaller Than 20 And Even Number
  16 + 8 = 24

  =================================

  Test Case 2
  Numbers => 100, 11, 12, 18
  Result => 30

  "Explain"
  Starting Result Is 0
  [Number 1] 100 => Not Smaller Than 20
  [Number 2] 11  => Not Even Number
  [Number 3] 12  => Smaller Than 20 And Even Number
  0 + 12 = 12
  [Number 4] 18  => Smaller Than 20 And Even Number
  12 + 18 = 30

  =================================

  Test Case 3
  Numbers => 12, 8, 6, 18
  Result => 44

  "Explain"
  Starting Result Is 0
  [Number 1] 12 => Smaller Than 20And Even Number
  0 + 12 = 12
  [Number 2] 8  => Smaller Than 20And Even Number
  12 + 8 = 20
  [Number 3] 6  => Smaller Than 20 And Even Number
  20 + 6 = 26
  [Number 4] 18  => Smaller Than 20 And Even Number
  26 + 18 = 44
*/