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
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        vector<vector<int>> sol;
        if (!root)
        {
            return sol;
        }

        queue<pair<TreeNode *, int>> q;
        q.push(make_pair(root, 0));
        map<int, vector<int>> m;
        while (!q.empty())
        {
            pair<TreeNode *, int> p = q.front();
            q.pop();
            TreeNode *temp = p.first;
            int hd = p.second;
            // m.insert(hd,temp->val);
            m[hd].push_back(temp->val);
            if (temp->left)
            {
                q.push(make_pair(temp->left, hd - 1));
            }
            if (temp->right)
            {
                q.push(make_pair(temp->right, hd + 1));
            }
        }

        for (auto it = m.begin(); it != m.end(); it++)
        {
            vector<int> col;
            for (auto i : it->second)
            {
                col.push_back(i);
            }
            sol.push_back(col);
        }
        return sol;
    }
};
int main()
{

    return 0;
}