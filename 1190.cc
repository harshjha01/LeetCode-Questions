#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string reverseParentheses(string str)
    {
        stack<pair<string, string>> s;
        string sol = "";
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != '(' && str[i] != ')')
            {
                string curr = "";
                string backorfront = "";
                if (str[i - 1] == '(')
                {
                    backorfront = "back";
                }
                else
                {
                    backorfront = "front";
                }
                while (str[i] != '(' && str[i] != ')' && i < str.size())
                {
                    curr += str[i];
                    i++;
                }
                s.push({curr, backorfront});
            }
            else if (str[i] == ')')
            {
                auto temp = s.top();
                s.pop();
                if (temp.second == "back")
                {
                    sol += temp.first;
                    reverse(sol.begin(), sol.end());
                }
                else
                {
                    string tempstr = temp.first;
                    tempstr += sol;
                    reverse(tempstr.begin(), tempstr.end());
                    sol = tempstr;
                }
            }
        }
        while (!s.empty())
        {
            auto temp = s.top();
            s.pop();
            if (temp.second == "back")
            {

                string tempstr = temp.first;
                reverse(tempstr.begin(), tempstr.end());
                string tempstr2 = tempstr;
                tempstr2 += sol;
                sol = tempstr2;
            }
            else
            {
                string tempstr = temp.first;
                reverse(tempstr.begin(), tempstr.end());
                sol += tempstr;
            }
        }

        return sol;
    }
};
int main()
{

    return 0;
}