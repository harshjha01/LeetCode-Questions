#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string helper(string s, int l, int r, int n)
    {
        int max_length = 1, start = 0, end = 0;
        for (int i = 0; i < n - 1; i++)
        {
            while (l >= 0 && r < n)
            {
                if (s[l] == s[r])
                {

                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
            int len = r - l - 1;
            if (len > max_length)
            {
                max_length = len;
                start = l + 1;
                end = r - 1;
            }
        }
        return s.substr(start, end);
    }
    string longestPalindrome(string s)
    {
        int n = s.size();
        int max_length = 1;
        int start = 0, end = 0;
        if (n % 2 != 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                int l = i, r = i;
                while (l >= 0 && r < n)
                {
                    if (s[l] == s[r])
                    {

                        l--;
                        r++;
                    }
                    else
                    {
                        break;
                    }
                }
                int len = r - l - 1;
                if (len > max_length)
                {
                    max_length = len;
                    start = l + 1;
                    end = r - 1;
                }
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                int l = i, r = i + 1;
                while (l >= 0 && r < n)
                {
                    if (s[l] == s[r])
                    {

                        l--;
                        r++;
                    }
                    else
                    {
                        break;
                    }
                }
                int len = r - l - 1;
                if (len > max_length)
                {
                    max_length = len;
                    start = l + 1;
                    end = r - 1;
                }
            }
        }
        return s.substr(start, max_length);
    }
};
int main()
{

    return 0;
}