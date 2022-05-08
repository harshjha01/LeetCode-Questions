#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        string su = word;
        // toupper(temp);
        transform(su.begin(), su.end(), su.begin(), ::toupper);
        if (word == su)
        {
            return true;
        }
        transform(su.begin(), su.end(), su.begin(), ::tolower);
        if (word == su)
        {
            return true;
        }
        for (int i = 1; i < su.size(); i++)
        {
            if (isupper(word[i]))
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}