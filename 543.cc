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
    int result = 0;
    int diameter(TreeNode *root, int &d)
    {
        if (!root)
        {
            return 0;
        }
        int lh = diameter(root->left, d);
        int rh = diameter(root->right, d);
        if (1 + rh + lh > d)
        {
            d = 1 + lh + rh;
        }
        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        diameter(root, result);
        return result;
    }
};
int main()
{

    return 0;
}