#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
// class Solution
// {
// public:
//     vector<vector<int>> levelOrder(TreeNode *root)
//     {
//         queue<TreeNode *> q;
//         vector<int> sol;
//         q.push(root);
//         while (!q.empty())
//         {
//             TreeNode *temp = q.front();
//             q.pop();

//             sol.push_back(temp->val);
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//         return sol;
//     }
// };
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> sol;
        if (!root)
        {
            return sol;
        }

        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            vector<int> solbeta;
            int n = q.size();
            while (n--)
            {
                TreeNode *temp = q.front();
                q.pop();
                solbeta.push_back(temp->val);
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            sol.push_back(solbeta);
        }
        return sol;
    }
};
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> sol;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            
        }
    }
};
int main()
{

    return 0;
}