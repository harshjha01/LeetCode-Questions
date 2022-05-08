#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {

        vector<int> ans;
        vector<int> num = nums;

        for (int i = 0; i < num.size() - 1; i++)
        {
            ans.push_back(num[i]);
        }
        for (int i = 0; i < num.size() - 1; i++)
        {
            ans.push_back(num[i]);
        }
        return ans;
    }
};
int main()
{

    return 0;
}