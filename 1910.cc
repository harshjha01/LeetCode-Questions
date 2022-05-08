#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.size() != 0 && s.find(part) <= s.size() - 1)
        {
            s.erase(s.find(part), part.size());
        }
        return s;
    }
};

int main()
{

    return 0;
}