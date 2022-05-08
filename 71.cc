#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string simplifyPath(string path)
    {
        stack<string> s;
        string curr = "";
        for (auto i : path)
        {
            if (i == '/')
            {
                if (curr == "..")
                {
                    s.pop();
                }
                else if (curr != "" || curr != ".")
                {
                    s.push(curr);
                }
                curr = "";
            }
            else
            {
                curr += i;
            }
        }
        string sol = "/";
        while (!s.empty())
        {
            sol += s.top();
            sol.push_back('/');
            s.pop();
        }
        reverse(sol.begin(), sol.end());
        sol.pop_back();
        sol.insert(0, "/");
        return sol;
    }
};
class Solution
{
public:
    string simplifyPath(string path)
    {
        stack<string> s;
        string curr = "";
        for (auto i : path)
        {
            if (i == '/')
            {
                if (curr == "..")
                {
                    s.pop();
                }
                else if (curr != "" || curr != ".")
                {
                    s.push(curr);
                }
                curr = "";
            }
            else
            {
                curr += i;
            }
        }
        string sol;
        while (!s.empty())
        {
            sol += s.top();
            s.pop();
        }
        return sol;
    }
};
int main()
{

    return 0;
}