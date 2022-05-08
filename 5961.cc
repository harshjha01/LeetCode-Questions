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
    int pairSum(ListNode *head)
    {
        list<int> l;
        ListNode *root = head;
        while (head)
        {
            l.push_back(root->val);
            root = root->next;
        }
        int sol = INT_MIN;
        while (!l.empty())
        {
            int first = l.front();
            int sec = l.back();
            sol = max(sol, first + sec);
            l.pop_front();
            l.pop_back();
        }
        return sol;
    }
};
int main()
{

    return 0;
}