#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int *greaterElement(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        auto it = s.upper_bound(arr[i]);
        if (it == s.end())
        {
            arr[i] = -10000000;
        }
        else
        {
            arr[i] = *it;
        }
    }
    return arr;
}
class Solution
{
public:
    vector<int> advantageCount(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s;
        for (int i = 0; i < nums1.size(); i++)
        {
            s.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            auto it = s.upper_bound(nums2[i]);
            if (it == s.end())
            {
                nums2[i] = nums1[i];
            }
            else
            {
                nums2[i] = *it;
            }
        }
        return nums2;
    }
};
int main()
{

    return 0;
}