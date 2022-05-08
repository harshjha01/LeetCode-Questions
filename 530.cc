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
    // void util(TreeNode *root, int &min)
    // {
    //     int left = 0;
    //     int right = 0;
    //     if (!root)
    //     {
    //         return;
    //     }
    //     if (root->left)
    //     {

    //         left = root->val - root->left->val;
    //         if (left < min)
    //         {
    //             min = left;
    //         }
    //     }
    //     if (root->right)
    //     {

    //         right = root->right->val - root->val;
    //         if (right < min)
    //         {
    //             min = right;
    //         }
    //     }

    //     util(root->left, min);
    //     util(root->right, min);
    // }
    // int getMinimumDifference(TreeNode *root)
    // {
    //     int min = INT_MAX;
    //     util(root, min);
    //     return min;
    // }
};
class Solution
{
public:
    int prev = INT_MAX, diff = INT_MAX;

    int getMinimumDifference(TreeNode *root)
    {
        if (root)
        {
            getMinimumDifference(root->left);
            diff = (min(diff, abs(root->val - prev)));
            prev = root->val;
            getMinimumDifference(root->right);
        }
        return diff;
    }
};
int main()
{

    return 0;
}