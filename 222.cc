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
    vector<int> sol;
    void helper(TreeNode *root)
    {

        if (!root)
        {
            return;
        }
        sol.push_back(root->val);
        helper(root->left);
        helper(root->right);
    }
    int countNodes(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        helper(root);
        return sol.size();
    }
};
int main()
{

    return 0;
}