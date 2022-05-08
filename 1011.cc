#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isvalid(vector<int> A, int pages, int students, int n)
    {
        int cnt = 0;
        int sumAllocated = 0;
        for (int i = 0; i < n; i++)
        {
            if (sumAllocated + A[i] > pages)
            {
                cnt++;
                sumAllocated = A[i];
                if (sumAllocated > pages)
                    return false;
            }
            else
            {
                sumAllocated += A[i];
            }
        }
        if (cnt < students)
            return true;
        return false;
    }
    bool ispoosble(vector<int> pages, int mx, int sutudent)
    {
        int sum = 0, st = 1;
        for (int i = 0; i < pages.size(); i++)
        {
            sum += pages[i];
            if (sum > mx)
            {
                st++;
                sum = pages[i];
                if (sum > mx)
                {
                    return false;
                }
            }
            if (st > sutudent)
            {
                return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int> &pages, int sutudent)
    {
        int n = pages.size(), sol = 0;
        int low = INT_MAX, high = 0;
        for (int i = 0; i < n; i++)
        {
            low = min(low, pages[i]);
            high += pages[i];
        }
        while (low < high)
        {
            int mid = high + low / 2;
            if (isvalid(pages, mid, sutudent, n))
            {
                // isvalid(pages,mid,)
                sol = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}