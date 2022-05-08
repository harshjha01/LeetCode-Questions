#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool iscycle(ListNode *head)
    {
        ListNode *first = head;
        ListNode *second = head;
        while (first && first->next)
        {
            first = first->next;
            second = second->next->next;
            if (first == second)
            {
                return true;
            }
        }
        return false;
    }
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *temp = head;
        if (!iscycle(temp))
        {
            return NULL;
        }
        temp = head;
        unordered_set<ListNode *> s;
        while (true)
        {
            if (s.find(temp) != s.end())
            {
                return temp;
            }
            s.insert(temp);
            temp = temp->next;
        }
        return NULL;
    }
};
int main()
{

    return 0;
}