#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void helper(int sum, int index, vector<int> arr, vector<int> &curr, int target, vector<vector<int>> &s)
    {
        if (sum == target)
        {
            s.push_back(curr);
            return;
        }
        if (index == arr.size() || sum > target)
        {
            return;
        }
        sum += arr[index];
        curr.push_back(arr[index]);
        helper(sum, index, arr, curr, target, s);
        sum -= arr[index];
        curr.pop_back();
        helper(sum, index + 1, arr, curr, target, s);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        int sum;
        vector<int> curr;
        candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());
        helper(sum, 0, candidates, curr, target, ans);
        return ans;
    }
};
int main()
{

    return 0;
}