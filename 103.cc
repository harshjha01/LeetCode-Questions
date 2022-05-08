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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> sol;
        if (!root)
        {
            return sol;
        }
        stack<TreeNode *> s1;
        stack<TreeNode *> s2;
        s1.push(root);
        while (!s1.empty() || s2.empty())
        {
            int n = s1.size();
            vector<int> solbeta;
            while (n--)
            {
                TreeNode *temp = s1.top();
                s1.pop();
                solbeta.push_back(temp->val);
                if (temp->right)
                {
                    s2.push(temp->right)
                };
                if (temp->left)
                {
                    s2.push(temp->left)
                };
            }
            sol.push_back(solbeta);
            vector<int> solbeta2;
            int n2 = s2.size();

            while (n2--)
            {
                TreeNode *temp2 = s2.top();
                s2.pop();
                solbeta2.push_back(temp2->val);
                if (temp2->right)
                {
                    s1.push(temp2->right)
                };
                if (temp2->left)
                {
                    s1.push(temp2->left)
                };
            }
            sol.push_back(solbeta2);
        }
        return sol;
    }
};
int main()
{

    return 0;
}