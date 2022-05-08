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
    void helper(TreeNode *root)
    {
        if (!root)
        {
            return;
        }

        if (root->left)
        {
            invertTree(root->left);
        }
        if (root->right)
        {
            invertTree(root->right);
        }
        swap(root->left, root->right);
    }
    TreeNode *invertTree(TreeNode *root)
    {
        if (!root)
        {
            return root;
        }
        helper(root);
        return root;
    }
};
int main()
{

    return 0;
}