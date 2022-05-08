#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &arr, char target)
    {
        char sol = arr[0];
        int start = 0;
        int end = arr.size() - 1;
        while (start <= end)
        {
            int mid = start + end - start / 2;
            if (arr[mid] == target)
            {
                start = start + 1;
            }
            else if (arr[mid] > target)
            {
                sol = arr[mid];
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}