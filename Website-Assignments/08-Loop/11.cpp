#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Osama", "Ameer"};
  int size = sizeof(friends) / sizeof(friends[0]);
  for(int i = 0; i < size; i++)
  {
    cout << "=========\n";
    cout << "= " << friends[i] << " =\n";
    cout << "==================\n== ";
    for (int j = 0; j < 5; j++)
    {
      cout << friends[i][j];
      if (j < 4)
      {
        cout << ", ";
      }
    }
    cout << " =\n==================\n";
  }

  return 0;
}
/*
Output Needed

=========
= Ahmed =
==================
== A, h, m, e, d =
==================

=========
= Osama =
==================
== O, s, a, m, a =
==================

=========
= Ameer =
==================
== A, m, e, e, r =
==================
*/