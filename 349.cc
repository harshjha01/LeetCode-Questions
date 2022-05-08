#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        unordered_set<int> firstarray;
        unordered_set<int> convertarray;
        for (int i = 0; i < nums1.size(); i++)
        {
            firstarray.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (firstarray.count(nums2[i]) == 1)
            {
                convertarray.insert(nums2[i]);
            }
        }
        vector<int> sol(convertarray.begin(), convertarray.end());
        return sol;
    }
};
int main()
{

    return 0;
}