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
    void preorder(TreeNode *root, vector<int> &v)
    {
        if (!root)
        {
            return;
        }
        preorder(root->left, v);
        v.push_back(root->val);
        preorder(root->right, v);
    }
    void set(TreeNode *root, vector<int> v, int &i)
    {
        if (v.size() <= i)
        {
            return;
        }
        set(root->left, v, i);
        root->val = v[i];
        i++;
        set(root->right, v, i);
    }
    void recoverTree(TreeNode *root)
    {
        vector<int> v;
        int i = 0;
        preorder(root, v);
        sort(v.begin(), v.end());
        set(root, v, i);
    }
};
int main()
{

    return 0;
}