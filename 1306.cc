#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool canReach(vector<int> &arr, int s)
    {
        if (s >= arr.size() || s < 0)
        {
            return false;
        }
        if (arr[s] == 0)
        {
            return true;
        }
        if (arr[s] < 0)
        {
            return false;
        }
        arr[s] *= -1;
        return canReach(arr, s + arr[s]) || canReach(arr, s - arr[s]);
    }
};
int main()
{

    return 0;
}