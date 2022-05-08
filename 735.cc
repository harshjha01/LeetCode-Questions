#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> s;
        vector<int> v;
        for (int i = 0; i < asteroids.size(); i++)
        {
            int val = asteroids[i];
            if (val >= 0)
            {
                s.push(val);
            }
            else
            {
                while (!s.empty() && s.top() > 0 && s.top() < -1 * val)
                {
                    s.pop();
                }
                if (!s.empty() && s.top() == -1 * val)
                {
                    s.pop();
                }
                else if (!s.empty() && s.top() > -1 * val)
                {
                }
                else
                {
                    s.push(val);
                }
            }
        }
        while (!s.empty())
        {
            v.push_back(s.top()), s.pop();
        }
        return v;
    }
};
int main()
{

    return 0;
}