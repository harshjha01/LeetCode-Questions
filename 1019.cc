#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
class Solution
{
public:
    vector<int> nextLargerNodes(ListNode *head)
    {
        stack<int> s;
        vector<int> ans;
        while (head)
        {
            s.push(head->val);
            head = head->next;
        }

        ans.push_back(0);
        int higher = s.top();
        s.pop();
        while (!s.empty())
        {
            if (s.top() > higher)
            {
                higher = s.top();
                s.pop();
                ans.push_back(0);
            }
            s.pop();
            ans.push_back(higher);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{

    return 0;
}