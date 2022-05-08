#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{

public:
    vector<int> prefixsumm(vector<int> arr)
    {
        vector<int> sol;
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            sol[i] = sum;
        }
        return sol;
    }
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        // vector<int> prefixsum = prefixsumm(nums);
        // unordered_set<int> s;
        // for (int i = 0; i < prefixsum.size(); i++)
        // {
        //     int temp = prefixsum[i] % k;
        //     if (s.find(temp) != s.end())
        //     {
        //         return true;
        //     }
        //     s.insert(temp);
        // }
        if (nums.size() < 1)
        {
            return false;
        }

        unordered_map<int, int> m;
        int sum = 0;
        m[0]++;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            int temp = sum % k;
            if (temp == 0 && i < 0)
            {
                return true;
            }

            if (m.find(temp) != m.end())
            {
                return true;
            }
            m[temp]++;
        }

        return false;

        //ksdh
        unordered_map<int, int> mp;
        int n = nums.size();
        if (n < 2)
            return false;
        // store sum of prefix.
        int sum = 0;
        // current reminder.
        int rem = 0;
        // mp[0] = -1; method 1 for handling 0 index.
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            rem = sum % k;
            if (rem == 0 && i > 0) // method 2 for handling 0 index.
                return true;
            // if same reminder exists nums[i] - nums[j] divide by 6.
            // (sum2- sum1)%k =0 then sum2%k = sum1%k.
            if (mp.find(rem) != mp.end())
            {
                // check index should be atleast 2 element.
                if (i - mp[rem] > 1)
                {
                    return true;
                }
            }
            else
                mp[rem] = i;
        }
        return false;
    }
};
int main()
{

    return 0;
}