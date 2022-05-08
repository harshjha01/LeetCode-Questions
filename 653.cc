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
    void inorder(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode *root, int k)
    {
        inorder(root);
        // int start = 0, end = v.size();
        unordered_map<int, int> m;
        for (int i = 0; i < v.size(); i++)
        {
            m[v[i]]++;
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (m.find(k - v[i]) != m.end())
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}