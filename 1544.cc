#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string makeGood(string str)
    {
        stack<char> s;
        for (auto &i : str)
        {
            if (s.empty())
            {
                // s.push_back(i);
                s.push(i);
            }
            else
            {
                if (isupper(i) && islower(s.top()) || isupper(s.top()) && islower(i))
                {
                    s.pop();
                }
                else
                {
                    s.push(i);
                }
            }
        }
        string sol = "";
        // while (!s.empty())
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