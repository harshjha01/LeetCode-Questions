#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int bs(vector<int> &arr, int target, int idx)
    {
        if (arr.size() == 0)
        {
            return -1;
        }
        int start = 0, end = arr.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
                if (mid != idx)
                {
                    return mid;
                }
                else
                {
                    
                }
                
            }
            else if (arr[mid] > target)
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
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        for (int i = 0; i < numbers.size(); i++)
        {
            int ifsol = bs(numbers, target - numbers[i], i);
            if (ifsol != -1)
            {
                return {i + 1, ifsol + 1};
            }
        }
        return {};
    }
};
int main()
{

    return 0;
}