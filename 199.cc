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
    void helper(TreeNode *root, vector<int> &sol)
    {

        if (!root)
        {
            return;
        }

        bool islast = true;
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
                islast = true;
            }

            else
            {
                if (islast)
                {
                    sol.push_back(temp->val);
                    islast = false;
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
        vector<int> rightSideView(TreeNode * root)
        {
            vector<int> sol;
            helper(root, sol);
            return sol;
        }
    };
    int main()
    {

        return 0;
    }