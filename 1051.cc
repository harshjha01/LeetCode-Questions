#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> hh;
        hh = heights;
        int count = 0;
        sort(hh.begin(), hh.end());
        for (int i = 0; i < heights.size(); i++)
        {
            if (hh[i] != heights[i])
            {

                count++;
            }
        }
        return count;
    }
};
int main()
{

    return 0;
}