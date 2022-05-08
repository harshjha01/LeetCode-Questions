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
    bool iscycle = true;
    bool iscyclic(TreeNode *root1, TreeNode *root2)
    {
        if (!root1 && !root2)
        {

            return true;
        }
        if (!root1 || !root2)
        {
            return false;
        }
        if (root1->val != root2->val)
        {
            return false;
        }
        return iscyclic(root1->left, root2->right) && iscyclic(root1->right, root2->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
        {
            return true;
        }

        return iscyclic(root->left, root->right);
    }
};
int main()
{

    return 0;
}