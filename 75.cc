#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int key, j;
        for (int i = 1; i <= nums.size() - 1; i++)
        {
            key = nums[i];
            j = i - 1;
            // Loop for each pass
            while (j >= 0 && nums[j] > key)
            {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
    }
}
}
;
int main()
{

    return 0;
}