#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxRepeating(string sequence, string word)
    {
        if (word.size() > sequence.size())
        {
            return 0;
        }
        int k = word.size(), sol = 0;
        for (int i = 0; i < sequence.size(); i++)
        {
            string temp = sequence.substr(i, i + k);
            if (temp == word)
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