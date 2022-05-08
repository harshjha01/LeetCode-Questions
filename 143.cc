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
    void reorderList(ListNode *head)
    {
        list<ListNode *> l;
        while (head)
        {
            l.push_back(head);
        }
        // ListNode *head = new ListNode;
        while (!l.empty())
        {
            head = l.back();
            l.pop_back();
            head->next = l.front();
            l.pop_front();
        }
        head->next = NULL;
    }
};
int main()
{

    return 0;
}