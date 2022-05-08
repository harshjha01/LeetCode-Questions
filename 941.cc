#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int n = arr.size();
        // arr.length >= 3
        if (n <= 3)
        {
            return false;
        }
        bool decreasing = false;

        if (arr[0] > arr[1])
        {
            return false;
        }

        for (int i = 0; i < n; i++)
        {

            if (arr[i] == arr[i + 1])
            {
                return false;
            }
            if (arr[i] < arr[i + 1] && decreasing)
            {
                return false;
            }
            if (arr[i] > arr[i + 1])
            {
                decreasing = true;
            }
        }
        if (!decreasing)
        {
            return false;
        }
        return true;
    }
};
int main()
{

    return 0;
}