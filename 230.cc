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
    vector<int> v;
    void inorder1(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        inorder1(root->left);
        v.push_back(root->val);
        inorder1(root->right);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        inorder1(root);
        return v[k-1];
    }
};
int main()
{
    cout << "hello";
    return 0;
}