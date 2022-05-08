#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string frequencySort(string s)
    {

        // map<char, char> mymap;
        // bool alfa[26] = {false};
        // for (char c : s)
        // {
        //     mymap[c - 'a'] = true;
        // }
        map<char, int> harsh;
        string res;
        for (auto i : s)
        {
            harsh[i]++;
        }
        // a=3;b=4;A=1;
        // bbbbaaaA

        // for (auto i : harsh)
        // {
        //     auto s = i.first();
        // }
    }
    string frequencySort(string s)
    {
        unordered_map<char, int> m;
        for (auto i : s)
        {
            m[i]++;
        }
        priority_queue<pair<int, char>, vector<pair<int, char>>, less<pair<int, char>>> q;
        for (auto i : m)
        {
            q.push({i.second, i.first});
        }
        string sol = "";
        while (!q.empty())
        {
            pair<char, int> temp = q.top();
            while (temp.first--)
            {
                sol.push_back(temp.second);
            }
            q.pop();
        }
        return sol;
    }
};
int main()
{

    return 0;
}