#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        int countt = 0;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == ' ')
            {
                reverse(s.begin() + countt, s.begin() + i);
                countt = i + 1;
            }
        }
        reverse(s.begin() + countt, s.end());
        return s;
    }
};
int main()
{

    return 0;
}