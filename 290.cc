#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<string> convertword(string &s)
    {
        vector<string> sol;
        for (int i = 0; i < s.size(); i++)
        {
            string temp = "";
            while (s[i] != ' ' && s.size() > i)
            {
                temp += s[i];
                i++;
            }
            sol.push_back(temp);
        }
        return sol;
    }
    bool wordPattern(string pattern, string word)
    {
        vector<string> s = convertword(word);
        int psize = pattern.size();
        int ssize = s.size();
        if (psize != ssize)
        {
            return false;
        }
        unordered_map<char, string> mp;
        for (int i = 0; i < psize; i++)
        {
            auto itr = mp.find(pattern[i]);
            if (itr != mp.end())
            {
                if (itr->second != s[i])
                {
                    return false;
                }
            }
            else
            {
                mp[pattern[i]] = s[i];
            }
        }
        unordered_set<string> seet;
        for (auto &i : mp)
        {
            if (seet.find(i.second) != seet.end())
            {
                return false;
            }
            seet.insert(i.second);
        }
        return true;
    }
};

int main()
{

    return 0;
}