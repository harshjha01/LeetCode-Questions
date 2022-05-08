#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class kuchbhi
{
public:
  struct q
  {
    int size;
    string name = "";
  };

  void print()
  {
    q bobby = {18, "booby"};
    cout << bobby.name << " " << bobby.size;
  }
};
int main()
{
  kuchbhi h;
  h.print();

  return 0;
}