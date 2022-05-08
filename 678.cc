#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool checkValidString(string s)
    {
        int n = s.size();
        stack<int> open;
        stack<int> star;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                open.push(i);
            }

            if (s[i] == '*')
            {
                star.push(i);
            }
            if (s[i] == ')')
            {
                if (!open.empty())
                {
                    open.pop();
                }
                else if (!star.empty())
                {
                    star.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        while (!open.empty())
        {
            if (!star.top() > open.top() && star.empty())
            {
                return false;
            }
            else
            {
                star.pop();
                open.pop();
            }
        }
        if (open.size() == 0)
        {
            return true;
        }
        return false;
    }
};
int main()
{

    return 0;
}