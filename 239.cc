#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {

        /*

            Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
            Output: [3,3,5,5,6,7]
            Explanation:
            Window position                Max
            ---------------               -----
            [1  3  -1] -3  5  3  6  7       3
             1 [3  -1  -3] 5  3  6  7       3
             1  3 [-1  -3  5] 3  6  7       5
             1  3  -1 [-3  5  3] 6  7       5
             1  3  -1  -3 [5  3  6] 7       6
             1  3  -1  -3  5 [3  6  7]      7

        */

        // pair<int, int> dp[n][m];
        set<pair<int, int>> s;
        vector<int> sol;
        int i = 0, j = 0, n = nums.size();
        int maxm = INT_MIN;
        while (j <= k)
        {
           

            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {

                i++, j++;
            }
        }
    }
};
int main()
{

    return 0;
}