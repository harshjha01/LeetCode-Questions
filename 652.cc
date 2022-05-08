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
//     void theresult(TreeNode *root1, TreeNode *root2, vector<TreeNode *> &sol)
//     {
//         if (root1->val == root2->val)
//         {
//             sol.push_back(root1);
//         }

//     }
//     vector<TreeNode *> findDuplicateSubtrees(TreeNode *root)
//     {
//         vector<TreeNode *> sol;
//         if (!root->left && !root->right)
//         {
//             //sol.push_back(root);
//             return sol;
//         }
//         if (!root->left || !root->right)
//         {
//             return sol;
//         }

//         theresult(root->left, root->right, sol);
//         return sol;
//     }
// };
class Solution
{
public:
    void helper(TreeNode *root, vector<TreeNode *> &v)
    {
        set<TreeNode *> s;

        if (s.find(root) != s.end())
        {
            v.push_back(root);
        }
        s.insert(root);
        helper(root->left, v);
        helper(root->right, v);
    }
    vector<TreeNode *> findDuplicateSubtrees(TreeNode *root)
    {
        vector<TreeNode *> v;
        if (!root->left && !root->right)
        {
            //sol.push_back(root);
            return v;
        }
        helper(root, v);
        return v;
    }
};
int main()
{

    return 0;
}