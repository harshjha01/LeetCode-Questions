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
    void ifbst(TreeNode *root, bool &isbst)
    {
        if (!root)
        {
            return;
        }
        if (root->left)
        {
            if (root->left->val >= root->val)
            {
                isbst = false;
            }
        }
        if (root->right)
        {
            if (root->right->val <= root->val)
            {
                isbst = false;
            }
        }
        ifbst(root->left, isbst);
        ifbst(root->right, isbst);
    }
    bool isValidBST(TreeNode *root)
    {
        bool isbst = true;
        if (!root)
        {
            return true;
        }
        ifbst(root, isbst);
        return isbst;
    }
};
int main()
{

    return 0;
}