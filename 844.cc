#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1;
        stack<char> s2;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
            {
                if (!s1.empty())
                {
                    s1.pop();
                }
            }
            s1.push(s[i]);
        }
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == '#')
            {
                if (!s2.empty())
                {
                    s2.pop();
                }
            }
            s2.push(t[i]);
        }

        if (s1 == s2)
        {
            return true;
        }
        return false;
    }
};
//  stack<char> s1 = s;
//         stack<char> s2 = t;
//         s.erase();
//         t.erase();
//         for (int i = 0; i < s1.size(); i++)
//         {
//             if (s1.top() == '#')
//             {
//                 s1.pop();
//                 s1.pop();
//             }
//             s.push_back(s1.top());
//             s1.pop();
//         }
//         for (int i = 0; i < s2.size(); i++)
//         {
//             if (s2.top() == '#')
//             {
//                 s2.pop();
//                 s2.pop();
//                         }
//             t.push_back(s2.top());
//             s2.pop();
//         }
int main()
{

    return 0;
}