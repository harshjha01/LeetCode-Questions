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
    TreeNode *sol;
    void helper(TreeNode *root, int target)
    {
        if (!root)
        {
            return;
        }
        if (root->val == target)
        {
            sol = root;
        }
        helper(root->left, target);
        helper(root->right, target);
    }
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        helper(cloned, target->val);
        return sol;
    }
};
int main()
{

    return 0;
}