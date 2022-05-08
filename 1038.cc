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
    TreeNode *helper(TreeNode *root, int &count)
    {
        if (!root)
        {
            return NULL;
        }
        helper(root->right, count);
        root->val = count + root->val;
        count = root->val;
        helper(root->left, count);
        return root;
    }
    TreeNode *bstToGst(TreeNode *root)
    {
        int count = 0;
        return helper(root, count);
    }
};
int main()
{

    return 0;
}