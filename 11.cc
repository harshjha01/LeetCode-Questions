#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int sol = 1;
        int start = 0, end = height.size() - 1;
        while (start < end)
        {
            int tempsol = 0;
            tempsol = min(height[start], height[end]) * end - start + 1;
            sol = max(sol, tempsol);
            if (height[start] <= height[end])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}