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
       TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root->val == p->val || root->val == q->val)
        {
            return root;
        }
        if (root->left == p && root->right == q)
        {
            return root;
        }
        TreeNode *lf = lowestCommonAncestor(root->left, p, q);
        TreeNode *rf = lowestCommonAncestor(root->right, p, q);

        if (lf && rf)
        {
            return root;
        }
        if (lf)
        {
            return lf;
        }
        if (rf)
        {
            return rf;
        }
        return NULL;
    }
};
int main()
{

    return 0;
}