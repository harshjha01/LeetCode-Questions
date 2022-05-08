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
    TreeNode *helper(int start, int end, vector<int> a)
    {
        if (start > end)
        {
            return NULL;
        }
        // int mid = start + (end - start) / 2;
        int mid = (start + end) / 2;
        TreeNode *root = new TreeNode(a[mid]);

        root->left = helper(start, mid - 1, a);
        root->right = helper(mid + 1, end, a);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return helper(0, nums.size() - 1, nums);
    }
};
int main()
{

    return 0;
}