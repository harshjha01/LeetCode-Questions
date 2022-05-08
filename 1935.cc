#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    unordered_set<char> s;
    bool isconatin(string str)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (s.find(str[i]) != s.end())
            {
                return false;
            }
        }
        return true;
    }
    int canBeTypedWords(string text, string brokenLetters)
    {
        for (int i = 0; i < brokenLetters.size(); i++)
        {
            s.insert(brokenLetters[i]);
        }
        int sol = 0;
        for (int i = 0; i < text.size(); i++)
        {
            string temp = "";
            while (text[i] != ' ')
            {
                temp.push_back(text[i]);
                i++;
            }
            if (isconatin(temp))
            {
                sol++;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}