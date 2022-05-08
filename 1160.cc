#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        unordered_map<char, int> m;
        int sol = 0;
        for (auto i : chars)
        {
            m[i]++;
        }
        for (int j = 0; j < words.size(); j++)
        {
            unordered_map<char, int> mtemp = m;
            string temp = words[j];
            bool tocount = true;
            for (int i = 0; i < temp.size(); i++)
            {
                if (m.find(temp[i]) != m.end())
                {
                    m[temp[i]]--;
                    if (m[temp[i]] == 0)
                    {
                        m.erase(m.find(temp[i]));
                    }
                }
                else
                {
                    tocount = false;
                }
            }
            if (tocount)
            {
                sol += temp.size();
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}