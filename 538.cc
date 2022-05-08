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
    TreeNode *helper(TreeNode *root, int &prev)
    {
        if (!root)
        {
            return NULL;
        }
        root->val += prev;
        prev = root->val;
        root->right = helper(root->right, prev);
        root->left = helper(root->left, prev);
        return root;
    }
    TreeNode *convertBST(TreeNode *root)
    {
        if (!root)
        {
            return NULL;
        }
        int prev = 0;
        return helper(root, prev);
    }
};
int main()
{

    return 0;
}