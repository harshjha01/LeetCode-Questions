#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Codec
{
public:
    string s;
    void serlization(TreeNode *root, string s)
    {
        if (!root)
        {
            s.push_back(-1);
            return;
        }
        s.push_back(root->val);
        serlization(root->left, s);
        serlization(root->right, s);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        if (!root)
        {
            return s;
        }
        serlization(root, s);
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserializeation(string data, int &curr)
    {
        if (data[curr] == -1)
        {
            curr++;
            return NULL;
        }
        // int x = 
        TreeNode *root = new TreeNode(data[curr]);
        // root->val = x;
        curr++;
        root->left = deserializeation(data, curr);
        root->right = deserializeation(data, curr);
    }
    TreeNode *deserialize(string data)
    {
    }
};
int main()
{

    return 0;
}