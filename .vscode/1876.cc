#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int countGoodSubstrings(string s)
    {
        int k = 3;
        int i = 0, j = 0;
        int sol = 0;

        while (j < s.size())
        {

            if (j - i + 1 < k)
            {
                j++;
            }
            if (j - i + 1 == k)
            {
                if ((s[i] != s[i + 1] && s[i] != s[i + 2]) && (s[i + 1] != s[i] && s[i + 1] != s[i + 2]) && (s[i + 2] != s[i + 1] && s[i + 2] != s[i]))
                {
                    sol++;
                }
                i++;
                j++;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}