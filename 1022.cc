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
        v.push_back(root->val);
        preorder(root->left, v);
        preorder(root->right, v);
    }
    int binaryToDecimal(vector<int> v)
    {

        // int num = n;
        int dec_value = 0;

        // Initializing base value to 1, i.e 2^0
        int base = 1;
        for (int i = v.size() - 1; i > 0; i--)
        {
            int last_digit = v[i];

            dec_value += last_digit * base;

            base = base * 2;
        }
        return dec_value;

        // int temp = num;
        // while (temp)
        // {
        //     int last_digit = temp % 10;
        //     temp = temp / 10;

        //     dec_value += last_digit * base;

        //     base = base * 2;
        // }

        // return dec_value;
    }
    int sumRootToLeaf(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }

        vector<int> v;
        preorder(root, v);
        return binaryToDecimal(v);
    }
};
int main()
{

    return 0;
}