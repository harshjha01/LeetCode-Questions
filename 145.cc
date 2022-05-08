#include <iostream>
#include <vector>
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
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        recursivefunction(root, ans);
        return ans;
    }
    void recursivefunction(TreeNode *root, vector<int> &ans)
    {

        if (root == NULL)
        {
            return;
        }
        recursivefunction(root->left, ans);
        recursivefunction(root->right, ans);
        ans.push_back(root->val);
    }
};
int main()
{

    return 0;
}