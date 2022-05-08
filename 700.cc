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
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (!root)
        {
            return NULL;
        }
        if (root->val == val)
        {
            return root;
        }
        if (root->val <val)
        {
            return searchBST(root->right, val);
        }
        return searchBST(root->left, val);
    }
};
int main()
{

    return 0;
}