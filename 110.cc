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
    bool balanced = false;

public:
    int height(TreeNode *root, bool balanced)
    {
        if (!root)
        {
            return 0;
        }
        int lh = height(root->left, balanced);
        int rh = height(root->right, balanced);
        if (lh != -1 && rh != -1)
        {
            if (abs(lh - rh) > 1)
                balanced = false;
            else
            {
                return max(lh, rh) + 1;
            }
        }
        balanced = false;
    }
    // if (abs((lh - rh) > 1))
    // {
    //     balanced = false;
    // }
    // return 1 + max(lh, rh);

    bool isBalanced(TreeNode *root)
    {
        height(root, &balanced);
        return balanced;
    }
};

int main()
{

    return 0;
}