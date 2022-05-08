#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int numOfSubarrays(vector<int> &arr, int k, int threshold)
    {
        int i = 0, j = 0, sum = 0, ans = 0;

        while (j < arr.size())
        {
            sum += arr[j];
            if (j - i + 1 < k)
            {
                j++;
            }
            else
            {
                if (sum / k >= threshold)
                {
                    ans++;
                }
                sum -= arr[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}