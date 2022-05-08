#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  vector<int> v = {2, 4};
  stringstream ss;
  copy(v.begin(), v.end(), ostream_iterator<int>(ss, " "));
  string s = ss.str();
  s = s.substr(0, s.length() - 1); // get rid of the trailing space
  cout << s;

  return 0;
}