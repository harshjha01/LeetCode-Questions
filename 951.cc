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
    bool sol = true;
    void helper(TreeNode *root1, TreeNode *root2)
    {
        if (!root1 || !root2)
        {
            return;
        }
        // helper(root1->left, root2->right);
        // helper(root1->right, root2->left);
        helper(root1->right, root2->right);
        helper(root1->left, root2->left);
        if (root1->val != root2->right->val)
        {
            sol = false;
        }
    }
    bool flipEquiv(TreeNode *root1, TreeNode *root2)
    {
       
        
        if (!root1 && !root2)
        {
            return true;
        }
        if (root1->val != root2->val)
        {
            return false;
        }
        flipEquiv(root1->left, root2->right);
        flipEquiv(root1->right, root2->left);
        return true;
    }
};
int main()
{

    return 0;
}