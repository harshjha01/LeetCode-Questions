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
    int maxDepth(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
        // queue<TreeNode *> q;
        // q.push(root);
        // while (!q.empty())
        // {
        //     TreeNode *temp = q.front();
        //     if (temp->left)
        //     {
        //         q.push(temp->left);
        //     }
        //     if (temp->right)
        //     {
        //         q.push(temp->right);
        //     }
        // }
    }
};
int main()
{

    return 0;
}