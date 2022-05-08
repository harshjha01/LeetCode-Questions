#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &num)
    {
        int start = 0;
        int end = num.size() - 1;
        while (start < end)
        {
            if (num[start] < num[end])
                return num[start];

            int mid = start + (end - start) / 2;

            if (num[mid] >= num[start])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return num[start];
    }
};
int main()
{

    return 0;
}