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
    int findBottomLeftValue(TreeNode *root)
    {
        int sol = root->val;
        if (!root)
        {
            return sol;
        }
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();

            if (temp->right)
            {
                q.push(temp->right);
                sol = temp->right->val;
            }
            if (temp->left)
            {
                q.push(temp->left);
                sol = temp->left->val;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}