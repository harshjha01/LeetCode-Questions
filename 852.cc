#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int max = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[max] < arr[i])
            {
                max = i;
            }
        }
        return  max;
    }
};
int main()
{

    return 0;
}