#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {

        // nums = [ 1, 2, 1, 3, 2, 5 ] Output : [ 3, 5 ]
        // vector<int> sol;
        // int count = 0;
        // for (int i = 0; i < nums.size(); i++)
        // {

        //     for (int j = 0; j < nums.size(); j++)
        //     {
        //         if (nums[i] == nums[j])
        //         {
        //             count++;
        //         }
        //     }
        //     if (count != 2)
        //     {
        //         sol.push_back(nums[i]);
        //     }
        //     count=0;
        // }
        // return sol;
        // vector<int> sol;
        // sort(nums.begin(), nums.end());

        // for (int i = 0; i < nums.size(); i++, j++)
        // {
        //     int c = nums[i] ^ nums[i + 1];
        //     if (c == 0)
        //     {
        //         i++;
        //     }
        //     else
        //     {
        //         sol.push_back(nums[i]);
        //         i++;
        //     }
        // }
        unordered_map<int, int> mymap;
        vector<int> sol;
        for (auto i = 0; i < nums.size(); i++)
        {
            mymap[nums[i]]++;
        }
        for (auto i = mymap.begin(); i != mymap.end(); i++)
        {
            if (i->second == 1)
            {
                sol.push_back(i->first);
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}