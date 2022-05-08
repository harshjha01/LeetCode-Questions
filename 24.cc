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
    ListNode *swapPairs(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *prev;
        //  = new ListNode(0);
        prev->val = NULL;
        ListNode *curr = head;
        // prev->next = head;

        while (!curr && !curr->next)
        {
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = curr;
            curr = curr->next;
            prev = prev->next->next;
        }
        return prev->next;
        // return head;
    }
};
int main()
{

    return 0;
}