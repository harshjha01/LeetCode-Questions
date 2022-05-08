#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution
{
public:
    void makeparent(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &m)
    {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp->left)
            {
                m[temp->left] = temp;
                q.push(temp->left);
            }
            if (temp->right)
            {
                m[temp->right] = temp;
                q.push(temp->right);
            }
        }
    }
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        unordered_map<TreeNode *, TreeNode *> parent;
        makeparent(root, parent);

        unordered_map<TreeNode *, bool> vis;
        queue<TreeNode *> q;
        q.push(target);
        vis[target] = true;
        int level = 0;
        while (!q.empty())
        {
            int size = q.size();
            if (level++ == k)
            {
                break;
            }
            for (int i = 0; i < size; i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                if (curr->left && !vis[curr->left])
                {
                    vis[curr->left] = true;
                    q.push(curr->left);
                }
                if (curr->right && !vis[curr->right])
                {
                    vis[curr->right] = true;
                    q.push(curr->right);
                }
                if (parent[curr] && !vis[parent[curr]])
                {
                    vis[parent[curr]] = true;
                    q.push(parent[curr]);
                }
            }
        }
        vector<int> sol;
        while (!q.empty())
        {
            sol.push_back(q.front()->val);
            q.pop();
        }
        return sol;
    }
};
int main()
{

    return 0;
}