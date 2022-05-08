#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        vector<string> sol;
        unordered_map<char, int> m;
        for (int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            for (auto j : s)
            {
                m[j]++;
            }
        }
        for (auto i : m)
        {
            if (i.second >= words.size())
            {
                if (i.second == words.size())
                {
                    
                }
            }
        }
    }
};
int main()
{

    return 0;
}