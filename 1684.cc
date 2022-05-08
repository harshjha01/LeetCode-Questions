#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int countt = words.size();
        bool that[26] = {false};
        for (char c : allowed)
        {
            that[c - 'a'] = true;
        }
        for (string temp : words)
        {
            for (char h : temp)
            {
                if (that[h - 'a'] == false)
                {
                    countt--;
                    break;
                }
            }
        }
        return countt;
    }
};
int main()
{

    return 0;
}