#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxDistance(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size(), m = nums2.size();
        if (nums1[n - 1] > nums2[0])
        {
            return 0;
        }
        int i = 0, j = 0, sol = 0;
        while (i < n && j < m)
        {
            if (nums1[i] <= nums2[j])
            {
                if (i <= j)
                {
                    sol = max(sol, j - i);
                }
                j++;
            }
            else
                i++;
        }
        return sol;
    }
};
int main()
{

    return 0;
}