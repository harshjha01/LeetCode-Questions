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
    void mytraversaal(TreeNode *root, vector<int> &v)
    {
        if (!root)
        {
            return;
        }
        if (!root->left && !root->right)
        {
            v.push_back(root->val);
        }
        mytraversaal(root->left, v);
        mytraversaal(root->right, v);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> v1;
        vector<int> v2;
        mytraversaal(root1, v1);
        mytraversaal(root2, v2);
        return v1==v2;
    }
};
int main()
{

    return 0;
}