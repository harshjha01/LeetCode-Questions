#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> hashmapp;
        for (int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(strs.begin(), strs.end());
            hashmapp[strs[i]].push_back(temp);
        }
        vector<vector<string>> naya;
        for (auto i = hashmapp.begin(); i != hashmapp.end(); i++)
        {
            naya.push_back(i->second);
        }
        return naya;
    }
};
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> sol;
        unordered_map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());

            m[temp].push_back(strs[i]);
        }
        for (auto &i : m)
        {
            sol.push_back(i.second);
        }
        return sol;
    }
};
int main()
{

    return 0;
}