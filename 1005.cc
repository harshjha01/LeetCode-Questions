#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int largestSumAfterKNegations(vector<int> &nums, int k)
    {
        priority_queue<int, vector<int>, greater<int>> q;
        for (auto i : nums)
        {
            q.push(i);
        }
        while (k)
        {
            int temp = q.top();
            q.pop();
            temp *= -1;
            q.push(temp);
            k--;
        }
        int sum = 0;
        while (!q.empty())
        {
            sum += q.top();
            q.pop();
        }
        return sum;
    }
};
int main()
{

    return 0;
}