#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {
        unordered_map<char, int> m;
        for (int i = 0; i < words2.size(); i++)
        {
            string temp = words2[i];
            for (auto k : temp)
            {
                m[k]++;
            }
        }
        vector<string> sol;
        for (int i = 0; i < words1.size(); i++)
        {
            unordered_map<char, int> temmap;
            temmap = m;
            string temp = words1[i];
            for (auto k : temp)
            {
                if (temmap.count(k) > 0)
                {
                    temmap[k]--;
                    if (temmap[k] == 0)
                    {
                        temmap.erase(temmap.find(k));
                    }
                }
                if (temmap.size() == 0)
                {
                    sol.push_back(temp);
                }
            }
        }
        return sol;
    }
};
class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {
        unordered_map<char, int> m;
        for (int i = 0; i < words2.size(); i++)
        {
            string temp = words2[i];
            for (auto k : temp)
            {
                m[k]++;
            }
        }
        vector<string> sol;
        for (int i = 0; i < words1.size(); i++)
        {
            unordered_map<char, int> temmap;
            temmap = m;
            string temp = words1[i];
            for (auto k : temp)
            {
                if (temmap.count(k) > 0)
                {
                    temmap[k]--;
                    if (temmap[k] == 0)
                    {
                        temmap.erase(temmap.find(k));
                    }
                }
                if (temmap.size() == 0)
                {
                    sol.push_back(temp);
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