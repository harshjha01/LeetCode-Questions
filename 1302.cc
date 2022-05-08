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
    void helper(TreeNode *root)
    {
    }
    int deepestLeavesSum(TreeNode *root)
    {
        int sol = 0;

        if (!root)
        {
            return 0;
        }
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();

            sol = 0;
            while (size--)
            {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
                sol += temp->val;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}
// int sum = 0;
// if (!root)
// {
//     return 0;
// }
// if (!root->left && !root->right)
// {
//     sum += root->val;
// }
// int lr = deepestLeavesSum(root->left);
// int rr = deepestLeavesSum(root->right);
// return lr + rr;