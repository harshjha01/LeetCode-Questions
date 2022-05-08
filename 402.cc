#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        stack<int> s;
        for (int i = 0; i < num.size(); i++)
        {
            while (!s.empty() && num[i] < s.top() && k > 0)
            {
                s.pop();
                k--;
            }
            if (!s.empty() && num[i] != '0')
            {
                s.push(num[i]);
            }
        }
        while (!s.empty() && k--)
        {
            s.pop();
            if (s.empty())
            {
                return "0";
            }
        }

        string sol;
        while (!s.empty())
        {
            sol.push_back(s.top());
            s.pop();
        }
        reverse(sol.begin(), sol.end());
        return sol;
    }
};
int main()
{

    return 0;
}