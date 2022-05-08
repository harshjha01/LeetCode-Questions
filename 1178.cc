#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool allpersent(string word, string puzzle)
    {
        for (int i = 0; i < word.size(); i++)
        {
            size_t found = puzzle.find(word[i]);
            if (found == string::npos)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> findNumOfValidWords(vector<string> &words, vector<string> &puzzles)
    {
        vector<int> sol;
        for (int i = 0; i < puzzles.size(); i++)
        {
            int wordcount = 0;
            string temp = puzzles[i];
            for (int j = 0; j < words.size(); j++)
            {
                //condition 1
                string wordtemp = words[i];
                size_t found = wordtemp.find(temp[0]);
                if (found == string::npos)
                {
                    continue;
                }
                //condition 2
                if (allpersent(wordtemp, temp))
                {
                    wordcount++;
                }
            }
            sol.push_back(wordcount);
        }
        return sol;
    }
};
int main()
{

    return 0;
}