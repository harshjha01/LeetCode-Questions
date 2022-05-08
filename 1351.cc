#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int addsol(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        int iffmidd = -1;
        while (start <= end)
        {
            int mid = start + end - start / 2;
            if (arr[mid] == 0)
            {
                iffmidd = mid;
                break;
            }
            else if (arr[mid] > 0)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        if (iffmidd != -1)
        {
            iffmidd++;
            return arr.size() - iffmidd + 1;
        }
        return arr.size() - start + 1;
    }
    int countNegatives(vector<vector<int>> &grid)
    {
        int sol = 0;
        for (auto &i : grid)
        {
            sol += addsol(i);
        }
        return sol;
    }
};
int main()
{

    return 0;
}