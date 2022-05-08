#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string sol;
        if (word1.size() >= word2.size())
        {
            for (int i = 0; i < word1.size(); i++)
            {
                sol.push_back(word1[i]);
                if (i < word2.size())
                {
                    sol.push_back(word2[i]);
                }
            }
        }
        else
        {
            for (int i = 0; i < word2.size(); i++)
            {
                sol.push_back(word2[i]);
                if (i < word1.size())
                {
                    sol.push_back(word1[i]);
                }
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}