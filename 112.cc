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
    bool mytree = false;
    void ifture(TreeNode *root, int target)
    {
        int sumroot = 0;
        if (!root)
        {
            return;
        }
        if (!root->left && !root->right && root->val + sumroot == target)
        {
            mytree = true;
        }
        sumroot += root->val;
        ifture(root->left, target);
        ifture(root->right, target);
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {

        ifture(root, targetSum);
        return mytree;
    }
};
int main()
{

    return 0;
}