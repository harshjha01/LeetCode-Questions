#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool validPalindrome(string s)
    {
        int i = 0;
        int j = s.size() - 1;

        int count = 0;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                count++;
                if (count < 2)
                {
                    return true;
                }
                s.erase(s.begin() + j);
            }
            else
            {
                i++;
                j--;
            }
        }
        if (count < 2)
        {
            return true;
        }
        return false;
    }
};
class Solution
{
public:
    bool helper(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int i = 0;
        int j = s.size() - 1;
        int count = 1;
        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return helper(s, i + 1, j) || helper(s, i, j - 1);
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}