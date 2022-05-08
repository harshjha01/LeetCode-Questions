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
    TreeNode *util(TreeNode *root)
    {
        if (!root->right)
        {
            return root;
        }
        root->right = util(root->right);
    }
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (!root)
        {
            return NULL;
        }
        if (root->val == key)
        {
            if (!root->left && !root->right)
            {
                root = NULL;
            }
            if (root->left && root->right)
            {
                TreeNode *node = util(root->left);
                root->val = node->val;
                root->left = deleteNode(root->left, node->val);
                return NULL;
            }
            if (!root->left)
            {
                return root->right;
            }
            if (!root->right)
            {
                return root->left;
            }
        }
        if (key > root->val)
        {
            root->right = deleteNode(root->right, key);
        }
        root->left = deleteNode(root->left, key);
    }
    TreeNode *deleteNode(TreeNode *root, int key)
    {
    }
    TreeNode *getSuccesor(TreeNode *curr)
    {
        curr = curr->right;
        while (curr != NULL && curr->left != NULL)
        {
            curr = curr->left;
        }
        return curr;
    }
    TreeNode *deleteNode(TreeNode *root, int X)
    {
        if (root == NULL)
        {
            return root;
        }
        if (X > root->val)
        {
            root->right = deleteNode(root->right, X);
        }
        else if (X < root->val)
        {
            root->left = deleteNode(root->left, X);
        }
        else
        {
            if (root->left == NULL)
            {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == NULL)
            {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }
            else
            {
                TreeNode *succ = getSuccesor(root);
                root->val = succ->val;
                root->right = deleteNode(root->right, succ->val);
            }
        }
        return root;
    }
};
int main()
{

    return 0;
}