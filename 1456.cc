#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool help(char ch)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }

    int maxVowels(string str, int k)
    {

        int sol = 0, i = 0, j = 0, n = str.size(), ans = 0, counter = 0;

        while (j < n)
        {
            int windowsize = j - i + 1;
            if (help(str[j]))
            {
                sol++;
            }
            if (windowsize < k)
            {
                j++;
            }
            else if (windowsize == k)
            {
                ans = max(ans, sol);
                if (help(str[i]))
                {
                    sol--;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}