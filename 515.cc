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
    // void helper(TreeNode *root, vector<int> first, vector<int> second, vector<int> &sol)
    // {

    // }
    void levelorder(TreeNode *root, vector<int> &sol, vector<int> level)
    {
    }
    vector<int> largestValues(TreeNode *root)
    {
        if (!root)
        {
            return {};
        }
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        int maxi = INT_MIN;
        vector<int> sol;
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp != NULL)
            {
                maxi = max(maxi, temp->val);

                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            else if (!q.empty())
            {
                sol.push_back(maxi);
                q.push(NULL);
                maxi = INT_MIN;
            }
        }
        sol.push_back(maxi);
        return sol;
    }
};
int main()
{

    return 0;
}