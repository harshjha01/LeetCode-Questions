#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxPower(string s)
    {
        int maxmm = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int temp = 0;
            if (s[i] == s[i + 1])
            {
                while (s[i] == s[i + 1])
                {
                    temp++;
                }
            }
            maxmm = max(maxmm, temp);
        }
        return maxmm;
    }
};
int main()
{

    return 0;
}