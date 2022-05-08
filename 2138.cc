#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<string> divideString(string s, int k, char fill)
    {
        vector<string> sol;
        for (int i = 0; i < s.size(); i++)
        {
            string temp = s.substr(i, k);
            if (temp.size() == k)
            {
                sol.push_back(temp);
            }
            else
            {
                int l = temp.size();
                for (int j = 0; j < (k - l); j++)
                {
                    temp += fill;
                }
                sol.push_back(temp);
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}