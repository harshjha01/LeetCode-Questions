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
    int path(TreeNode *root)
    {
        int count = 0;
        if (!root)
        {
            return 0;
        }
        if (!root->left && !root->right)
        {
            return 1;
        }
        count++;
        return min(path(root->left), path(root->right)) + 1;
    }
    int minDepth(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }

        return path(root);
    }
};
int main()
{

    return 0;
}