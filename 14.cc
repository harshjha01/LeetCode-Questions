#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 1)
        {
            return strs[0];
        }
        sort(strs.begin(), strs.end());
        string op = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            string temp = strs[i];
            for (int j = 0; j < temp.size(); j++)
            {
                if (temp[j] != op[j])
                {
                    op.erase(op.begin() + j, op.end());
                    break;
                }
            }
        }
        return op;
    }
};
int main()
{

    return 0;
}