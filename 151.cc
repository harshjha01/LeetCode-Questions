#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        int i = 0, j, chk;
        while (s[i] != '\0')
        {
            chk = 0;
            if (s[i] == ' ')
            {
                for (j = i; s[j - 1] != '\0'; j++)
                    s[j] = s[j + 1];
                chk = 1;
            }
            if (chk == 0)
                i++;
        }
        string in;
        string op;
        stack<string> mystack;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                mystack.push(in);
                in.clear();
            }
            else
            {
                in.push_back(s[i]);
            }
        }
        for (int i = 0; i < in.size(); i++)
        {
            in.push_back(in[i]);
        }

        for (int i = 0; i < mystack.size(); i++)
        {
            string temp = mystack.top();
            mystack.pop();

            for (int j = 0; j < temp.size(); j++)
            {
                op.push_back(temp[j]);
            }
            op.push_back(' ');
        }
        return op;
    }
};
int main()
{

    return 0;
}