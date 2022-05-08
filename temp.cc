#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    string in = "";
    int harsh = 0, baba = 0, x;
    cin >> x;
    for (int i = 0; i < 14; i++)
    {
      char c;
      cin >> c;
      in.push_back(c);
    }
    for (int i = 0; i < 14; i++)
    {
      if (in[i] == 'C')
      {
        harsh += 2;
      }
      if (in[i] == 'D')
      {
        harsh++;
        baba++;
      }
      else
      {
        baba += 2;
      }
    }
    if (harsh == baba)
    {
      cout << 45 * x << endl;
    }
    else if (harsh > baba)
    {
      cout << 60 * x << endl;
    }
    else if (harsh < baba)
    {
      cout << 40 * x << endl;
    }
  }
  return 0;
}