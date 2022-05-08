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
    void preorder(TreeNode *root, vector<int> &v)
    {
        if (!root)
        {
            return;
        }
        v.push_back(root->val);
        preorder(root->left, v);
        preorder(root->right, v);
    }
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        if (!root1)
        {
            return root2;
        }
        if (!root2)
        {
            return root1;
        }
        else
        {
            root1->val = root1->val + root2->val;
            root1->left = mergeTrees(root1->left, root2->left);
            root1->right = mergeTrees(root1->right, root2->right);
            return root1;
        }
    }
};
class Solution
{
public:
    void preorder(TreeNode *root, vector<int> &v)
    {
        if (!root)
        {
            return;
        }
        v.push_back(root->val);
        preorder(root->left, v);
        preorder(root->right, v);
    }
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        if (!root1 && !root2)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode();
        if (root1 && root2)
        {
            root->val = root1->val + root2->val;
            return root;
        }
        if (root1->left && !root2->left)
        {
            root->val = root1->left->val;
            return root;
        }
        if (!root1->left && root2->left)
        {
            root->val = root2->left->val;
            return root;
        }
        if (root1->right && !root2->right)
        {
            root->val = root1->right->val;
            return root;
        }
        if (!root1->right && root2->right)
        {
            root->val = root2->right->val;
            return root;
        }
        root->left = mergeTrees(root1->left, root2->left);
        root->right = mergeTrees(root1->right, root2->right);
        return root;
    }
};
int main()
{

    return 0;
}