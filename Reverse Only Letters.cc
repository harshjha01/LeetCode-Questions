#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        string ss;
        stack<char> stac;
        vector<int> v;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '-')
            {
                stac.push(s[i]);
            }
            v.push_back(i);
        }

        for (int i = 0; i < stac.size(); i++)
        {
            ss.push_back(stac.top());
            stac.pop();
        }
        for (int i = 0; i < v.size(); i++)
        {
            // s[v[i]].in
            ss.insert(v[i], "-");
        }
        return ss;
    }
};
int main()
{

    return 0;
}