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
    int maxLevelSum(TreeNode *root)
    {
        if (!root)
        {
            return 1;
        }
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        int sum = 0;

        vector<int> sol;
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp != NULL)
            {
                sum += temp->val;
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

                sol.push_back(sum);
                q.push(NULL);
                sum = 0;
            }
        }
        sol.push_back(sum);
        int ans = 1;
        for (int i = 0; i < sol.size(); i++)
        {
            if (sol[i - 1] < sol[i])
            {
                ans = i;
            }
        }
        return ans + 1;
    }
};
int main()
{

    return 0;
}