#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int scoreOfParentheses(string str)
    {
        stack<int> s;
        int sol = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
            {
                s.push(-1);
            }
            else
            {
                int sum = 0;
                if (s.top() == -1)
                {
                    s.pop();
                    s.push(1);
                }
                else
                {
                    while (s.top() != -1)
                    {
                        sum += s.top();
                        s.pop();
                    }
                    s.push(2 * sum);
                }
            }
        }
        return s.top();
    }
};
int main()
{

    return 0;
}