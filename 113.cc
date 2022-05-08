#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution
{
public:
    vector<vector<int>> sol;
    void helper(vector<int> temp, TreeNode *root, int targetSum)
    {
        int sum = 0;
        // vector<int> path;
        if (!root)
        {
            return;
        }
        sum += root->val;
        temp.push_back(root->val);
        if (!root->left && !root->right && targetSum == sum)
        {
            sol.push_back(temp);
        }
        else
        {
            helper(temp, root->left, targetSum);
            helper(temp, root->right, targetSum);
        }
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {

        if (!root)
        {
            return sol;
        }
        vector<int> temp;
        helper(temp, root, targetSum);
        return sol;
    }
};
class Solution
{
public:
    vector<vector<int>> sol;
    void helper(vector<int> &temp, TreeNode *root, int targetSum, int &sum)
    {
        if (!root)
        {
            return;
        }

        sum += root->val;
        temp.push_back(root->val);
        if (sum == targetSum && !root->left && !root->right)
        {
            sol.push_back(temp);
        }
        if (root->left)
        {
            helper(temp, root->left, targetSum, sum);
        }
        if (root->right)
        {
            helper(temp, root->right, targetSum, sum);
        }
        sum -= root->val;
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {

        if (!root)
        {
            return sol;
        }
        vector<int> temp;
        int sum = 0;
        helper(temp, root, targetSum, sum);
        return sol;
    }
};
int main()
{

    return 0;
}