#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
// class Solution
// {
// public:
// void helper(TreeNode *root, vector<int> &m)
// {
//     helper(root->left, m);
//     m.push_back(root->val);
//     helper(root->right, m);
// }
// int findSecondMinimumValue(TreeNode *root)
// {
//     vector<int> v;
//     helper(root, v);
//     sort(v.begin(), v.end());
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] == v[i + 1])
//         {
//             v.erase(v.begin() + i + 1);
//             i--;
//         }
//     }
//     if (v.size() <= 1)
//     {
//         return -1;
//     }
//     return v[1];
// }
//};

class Solution
{
public:
    bool leafnode(TreeNode *root)
    {
        if (!root->left && !root->right)
        {
            return true;
        }
        return false;
    }
    int findSecondMinimumValue(TreeNode *root)
    {
        if (!root || !root->left)
        {
            return -1;
        }

        int rootval = root->val;
        if (root->left->val != rootval || !leafnode(root->left))
        {
            return root->left->val;
        }
        if (root->right->val != rootval || !leafnode(root->right))
        {
            return root->right->val;
        }
        return -1;
    }
};
int main()
{

    return 0;
}