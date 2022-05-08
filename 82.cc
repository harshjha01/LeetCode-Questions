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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *start = head;
        while (start->next)
        {
            if (start->val == start->next->val)
            {
                start = start->next->next;
            }
            else
            {
                start = start->next;
            }
        }
        return head;
    }
};
int main()
{

    return 0;
}