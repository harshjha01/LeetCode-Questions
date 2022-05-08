#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string decodeAtIndex(string str, int k)
    {
        stack<string> s;
        string temp = "";
        s.push(temp);
        for (int i = 0; i < str.size(); i++)
        {
            if (isdigit(str[i]))
            {
                // to_integer(str[i]);
                int val = str[i] - '0';
                if (val != 0)
                {
                    string popped = s.top();
                    s.pop();
                    string sol = "";
                    for (int i = 0; i < val - 1; i++)
                    {
                        sol += popped;
                    }
                    if (sol.size() > k)
                    {
                        string solstr;
                        solstr.push_back(sol[k]);
                        return solstr;
                    }
                    else
                    {

                        s.push(sol);
                    }
                }
            }
            else
            {
                string popped = s.top();
                s.pop();
                popped.push_back(str[i]);
                s.push(popped);
            }
        }
        return "ghanta";
    }
};
int main()
{

    return 0;
}