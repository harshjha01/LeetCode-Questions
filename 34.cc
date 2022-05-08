#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &arr, int ele)
    {
        int start = 0;
        int end = arr.size() - 1;
        int first = -1;
        while (start <= end)
        {
            int mid = start + end - start / 2;
            if (arr[mid] == ele)
            {
                first = mid;
                end = mid - 1;
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
        start = 0;
        end = arr.size() - 1;
        int sec = -1;
        while (start <= end)
        {
            int mid = start + end - start / 2;
            if (arr[mid] == ele)
            {
                sec = mid;
                start = mid + 1;
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
        return {first, sec};
    }
};
int main()
{

    return 0;
}