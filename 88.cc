#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            v.push_back(nums1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < m + n; i++)
        {
            nums1[i] = v[i];
        }
    }
};
int main()
{

    return 0;
}