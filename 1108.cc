#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
  string defangIPaddr(string address)
  {
    string sol;
    for (int i = 0; i < address.size(); i++)
    {
      if (address[i] != '.')
      {
        sol.push_back('[');
        sol.push_back('.');
        sol.push_back(']');
      }
      sol.push_back(address[i]);
    }
    return sol;
  }
};
int main()
{

  return 0;
}