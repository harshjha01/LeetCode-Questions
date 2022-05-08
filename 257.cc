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
//     void returnpath(TreeNode *root, vector<string> &v)
//     {
//         string s;
// if (!root)
// {
//     return;
// }
//         s.push_back(root->val);
//         if (!root->right && !root->left)
//         {
//             v.push_back(s);
//         }

//         returnpath(root->right, v);
//         returnpath(root->left, v);
//     }
//     vector<string> binaryTreePaths(TreeNode *root)
//     {
//         vector<string> v;
//         returnpath(root, v);
//         return v;
//     }
// };

class Solution
{
public:
    void helper(TreeNode *root, string &temp, vector<string> &s)
    {

        if (!root->left && !root->right)
        {
            temp += to_string(root->val);
            s.push_back(temp);
        }
        temp += to_string(root->val) + "->";
        // temp.push_back(root->val);

        helper(root->left, temp, s);
        helper(root->right, temp, s);
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> s;
        string temp;
        helper(root, temp, s);
        return s;
    }
};
int main()
{

    return 0;
}