#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> hh;
        unordered_map<int, int> hhh;

        for (auto i = 0; i < arr.size(); i++)
        {
            hh[arr[i]]++;
        }
        // // unordered_map<int, int>::iterator it;

        for (auto it = hh.begin(); it != hh.end(); it++)
        {

            hhh[it->second]++;
        }
        for (auto itt = hhh.begin(); itt != hhh.end(); itt++)
        {
            if (itt->second != 1)
            {
                return false;
            }
        }
        return true;

        // sort(hh.begin(), hh.end());
        // for (auto i = 0; i < hh.size() - 1; i++)
        // {
        //     for (auto j = i + 1; j < hh.size(); j++)
        //     {
        //         if (hh[i] == hh[j])
        //         {
        //             return false;
        //         }
        //     }
        // }
        return true;
    }
};

int main()
{

    return 0;
}