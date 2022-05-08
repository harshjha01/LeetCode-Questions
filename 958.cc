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
    void helper(TreeNode *root, vector<int> &v)
    {
        queue<TreeNode *> q;
        if (!root)
        {
            v.push_back(NULL);
            return;
        }
        q.push(root);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            v.push_back(temp->val);
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
    bool isCompleteTree(TreeNode *root)
    {
        vector<int> v;
        helper(root, v);
        for (int i = v.size(); i > 0; i--)
        {
            if (v[i] != NULL)
            {
                break;
            }
            v.pop_back();
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == NULL)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}