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
    bool cheakforidentical(TreeNode *root1, TreeNode *root2)
    {
        if (!root1 && !root2)
        {
            return true;
        }
        if (!root1 || !root2)
        {
            return false;
        }
        if (root1->val != root2->val)
        {
            return false;
        }
        return cheakforidentical(root1->left, root2->left) && cheakforidentical(root1->right, root2->right);
    }
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp->val == subRoot->val)
            {
                bool isidentical = cheakforidentical(temp, subRoot);
                if (isidentical)
                {
                    return true;
                }
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            return false;
        }
    }
};
int main()
{

    return 0;
}