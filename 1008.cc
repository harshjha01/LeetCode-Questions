#include <iostream>
#include <bits/stdc++.h>
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
    TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        return treehelper(preorder, 0, preorder.size() - 1);
    }
    TreeNode *treehelper(vector<int> &preorder, int l, int r)
    {
        if (l > r)
        {
            return nullptr;
        }
        TreeNode *root = new TreeNode(preorder[l]);
        if (l == r)
        {
            return root;
        }
        int idx = l + 1;
        while (idx <= r && preorder[idx] < preorder[l])
        {
            idx++;
        }
        root->left = treehelper(preorder, l + 1, idx - 1);
        root->right = treehelper(preorder, idx  , r);
        return root;
    }
};

int main()
{

    return 0;
}