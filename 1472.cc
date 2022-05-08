#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class BrowserHistory
{
public:
    stack<string> backk, forwardd;
    BrowserHistory(string homepage)
    {
        backk.push(homepage);
    }

    void visit(string url)
    {
        while (!forwardd.empty())
        {
            forwardd.pop();
        }
        backk.push(url);
    }

    string back(int steps)
    {
        while (backk.size() > 1 and steps--)
        {
            forwardd.push(backk.top());
            backk.pop();
        }
        return backk.top();
    }

    string forward(int steps)
    {
        while (!forwardd.empty() and steps--)
        {
            backk.push(forwardd.top());
            forwardd.pop();
        }
        return backk.top();
    }
};

int main()
{

    return 0;
}