#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
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
    int findmaximimdex(vector<int> &nums, int s, int e)
    {
        int idx = -1;

        int maxi = INT_MIN;
        for (int i = s; i <= e; i++)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                idx = i;
            }
        }
        return idx;
    }

    TreeNode *helper(vector<int> &arr, int start, int end)
    {
        if (start > end)
        {
            return NULL;
        }
         if (start == end)
        {
             TreeNode *naya = new TreeNode(arr[idx]);
            return naya;
        }

        int idxx = findmaximimdex(arr, start, end);
        TreeNode *root = new TreeNode(arr[idxx]);
        root->left = helper(arr, start, idxx - 1);
        root->right = helper(arr, idxx + 1, end);

        return root;
    }
    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        TreeNode *root = helper(nums, 0, nums.size() - 1);
        return root;
    }
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution
{
public:
    

    TreeNode *helper(vector<int> &arr, int start, int end)
    {
        if (start > end)
        {
            return NULL;
        }
        int idx = -1;

        int maxi = -1;
        for (int i = start; i <= end; i++)
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
                idx = i;
            }
        }

        // int idxx = findmaximimdex(arr, start, end);
        TreeNode *root = new TreeNode(arr[idx]);
        root->left = helper(arr, start, idx - 1);
        root->right = helper(arr, idx + 1, end);

        return root;
    }
    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        TreeNode *root = helper(nums, 0, nums.size() - 1);
        return root;
    }
};
int main()
{

    return 0;
}