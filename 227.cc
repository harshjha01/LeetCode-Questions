#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int calculate(string s)
    {
        int sol = 0;
        char sign = '+';
        stack<int> stkk;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (isdigit(ch))
            {
                int val = 0;
                while (i < s.size() && isdigit(s[i]))
                {
                    val *= 10 + (s[i] - 48);
                    i++;
                }
                i--;
                if (sign == '+')
                {
                    stkk.push(val);
                }
                if (sign == '-')
                {
                    stkk.push(-val);
                }
                if (sign == '*')
                {
                    int a = stkk.top();
                    stkk.pop();
                    val *= a;
                    stkk.push(-val);
                }
                if (sign == '/')
                {
                    int a = stkk.top();
                    stkk.pop();
                    val /= a;
                    stkk.push(-val);
                }
            }
            else if (s[i] != ' ')
            {
                sign = ch;
            }
        }
        while (!s.empty())
        {
            sol += stkk.top();
            stkk.pop();
        }
        return sol;
    }
};
int main()
{

    return 0;
}