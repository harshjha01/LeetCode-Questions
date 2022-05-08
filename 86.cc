#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *left = new ListNode(-1);
        ListNode *right = new ListNode(-1);
        ListNode *leftitr = left, *rightitr = right, *itr = head;
        while (itr)
        {
            ListNode *node = new ListNode(itr->val);
            if (itr->val < x)
            {
                leftitr->next = node;
            }
            else
            {
                rightitr->next = node;
            }
            itr = itr->next;
        }
        leftitr->next = right;
        return left;
    }
};
class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        if (!head || !head->next)
        {
            return head;
        }

        ListNode *left = new ListNode(-1);
        ListNode *right = new ListNode(-1);
        ListNode *leftitr = left, *rightitr = right, *itr = head;
        while (itr)
        {
            ListNode *node = new ListNode(itr->val);
            if (itr->val < x)
            {
                leftitr->next = node;
                leftitr = leftitr->next;
            }
            else
            {
                rightitr->next = node;
                rightitr = rightitr->next;
            }
            itr = itr->next;
        }
        if (left->val == -1)
        {
            return right;
        }
        if (right->val == -1)
        {
            return left;
        }
        leftitr->next = right;
        return left->next;
    }
};
int main()
{

    return 0;
}