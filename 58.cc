#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void removeextraspace(string &s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ' && s[i + 1] == ' ')
            {
                s.erase(s.begin() + i + 1);
            }
        }
    }
    int lengthOfLastWord(string s)
    {
        for (int i = s.size(); i > 0; i--)
        {
            if (s[i] != ' ')
            {
                break;
            }
            s.pop_back();
        }

        string ans;
        for (int i = s.size(); i > 0; i++)
        {
            if (s[i] == ' ')
            {
                break;
            }
            ans.push_back(s[i]);
        }
        return ans.size();
    }
};
int main()
{

    return 0;
}