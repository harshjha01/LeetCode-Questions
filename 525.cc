#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {

        int sol = 0, sum = 0;
        unordered_map<int, int> m;
        m.insert(0, -1);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                sum += -1;
            }
            else
            {
                sum += 1;
            }
            auto it = m.find(sum);
            if (it != m.end())
            {
                int window = i - it->second;
                sol = max(sol, window);
            }
            else
            {
                m.insert(sum, i);
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}