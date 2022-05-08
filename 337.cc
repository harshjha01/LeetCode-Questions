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
    stack<int> levelorder(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<int> sol;
        stack<int> s;
        if (!root)
        {
            return s;
        }
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            sol.push_back(temp->val);
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            q.push(NULL);
        }

        for (int i = 0; i < sol.size(); i++)
        {
            if (sol[i] == NULL)
            {
                continue;
            }
            else
            {
                
                int temmmp = 0;
                while (sol[i] != NULL)
                {
                    temmmp += sol[i];
                    i++;
                }
                s.push(temmmp);
            }
        }
        return s;
    }
    int rob(TreeNode *root)
    {
        stack<int> s;
        s = levelorder(root);
        int a = 0, b = 0;
        while (!s.empty())
        {
            a += s.top();
            s.pop();
            if (!s.empty())
            {
                b += s.top();
                s.pop();
            }
        }
        return max(a, b);
    }
};
int main()
{

    return 0;
}