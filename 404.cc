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
    int sol = 0;
    void leftview(TreeNode *node)
    {
        TreeNode *root = node;
        bool isfirst = true;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (!temp)
            {
                if (q.size() == 0)
                {
                    return;
                }

                q.push(NULL);
                isfirst = true;
            }
            else
            {
                if (isfirst)
                {
                    sol += temp->val;
                }
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }
    void findsum(TreeNode *root, bool isleft)
    {
        if (!root)
        {
            return;
        }
        if (!root->left || !root->right && isleft == true)
        {
            sol += root->val;
        }
        findsum(root->left, true);
        findsum(root->right, false);
    }
    int sumOfLeftLeaves(TreeNode *root)
    {

        if (!root)
        {
            return 0;
        }
        findsum(root, false);
        return sol;
    }
};
int main()
{

    return 0;
}