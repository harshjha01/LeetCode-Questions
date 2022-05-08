#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        unordered_set<char> m;
        for (int i = 0; i < s.size() - 1; i++)
        {
            m.insert(s[i]);
        }
        string sol;

        for (auto i = m.begin(); i != m.end(); i++)
        {
            sol.push_back(*i);
        }
        sort(sol.begin(), sol.end());
        return sol;
    }
};
int main()
{

    return 0;
}