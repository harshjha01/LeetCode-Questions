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
    void findinorder(vector<int> &v, TreeNode *root)
    {
        if (!root)
        {
            return;
        }

        findinorder(root->left);
        v.push_back(root->val);
        findinorder(root->right);
    }
    TreeNode *createroot(vector<int> &v, int &i)
    {
        if (v.size() > i)
        {
            return NULL;
        }
        vector<int> h = {NULL};
        int x = 0;
        TreeNode *root = new TreeNode(v[i]);
        i++;
        root->left = createroot(h, x);
        root->right = createroot(v, i);
        return root;
    }
    TreeNode *increasingBST(TreeNode *root)

    {
        vector<int> v;
        findinorder(v, root);
        int i = 0;
        return createroot(v, i);
    }
};
int main()
{

    return 0;
}