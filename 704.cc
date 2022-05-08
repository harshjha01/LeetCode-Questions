#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int search(vector<int> &arr, int ele)
    {
        int start = 0;
        int end = arr.size() - 1;
        while (start <= end)
        {
            int mid = start + end - start / 2;
            if (ele == arr[mid])
            {
                return mid;
            }
            else if (ele < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return -1;
    }
};
class Solution
{
public:
    int binarySearch(vector<int> arr, int l, int r, int x)
    {
        if (r >= l)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == x)
                return mid;

            if (arr[mid] > x)
                return binarySearch(arr, l, mid - 1, x);

            return binarySearch(arr, mid + 1, r, x);
        }

        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};
int main()
{

    return 0;
}