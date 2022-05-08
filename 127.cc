#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        unordered_set<string> s;
        bool ispresene = false;
        for (auto words : wordList)
        {
            if (endWord.compare(words) == 0)
            {
                ispresene = true;
            }
            s.insert(words);
        }
        if (!ispresene)
        {
            return 0;
        }
        queue<string> q;
        int depth = 0;
        q.push(beginWord);
        while (!q.empty())
        {
            depth++;
            int lsize = q.size();
            while (lsize--)
            {
                string curr = q.front();
                q.pop();
                for (int i = 0; i < curr.size(); i++)
                {
                    string temp = curr;
                    for (char c = 'a'; c <= 'z'; c++)
                    {
                        temp[i] = c;
                        if (temp.compare(curr) == 0)
                        {
                            continue;
                        }
                        if (temp.compare(endWord) == 0)
                        {
                            return depth + 1;
                        }
                        else if (s.find(temp) != s.end())
                        {
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};
int main()
{

    return 0;
}