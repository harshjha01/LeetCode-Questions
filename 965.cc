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
    void helper(TreeNode *root, bool &sach, int val)
    {

        if (!root)
        {
            return;
        }
        if (root->val != val || !root->val != NULL)
        {
            sach = false;
        }

        if (root->left)
        {
            helper(root->left, sach, val);
        }

        if (root->right)
        {
            helper(root->right, sach, val);
        }
    }
    bool isUnivalTree(TreeNode *root)
    {
        if (!root)
        {
            return true;
        }
        bool sach = true;
        helper(root, sach, root->val);
        return sach;
    }
};
int main()
{

    return 0;
}