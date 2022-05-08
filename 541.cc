#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string reverseStr(string s, int k)
    {

        for (int i = 0; i < s.size(); i += (2 * k))
        {
            if (i + k < s.size())
            {

                reverse(s.begin() + i, s.begin() + i + k);
            }
            else
            {
                reverse(s.begin() + i, s.end());
            }

            // i = i + 2 * k;
        }
        return s;
    }
};
int main()
{
    Solution h;
    string f = h.reverseStr("abcdefg", 2);
    cout << f;
    

    return 0;
}