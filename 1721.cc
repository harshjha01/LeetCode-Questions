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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *temp = head;
        ListNode *temp1 = head;
        ListNode *temp2 = head;
        int count = 0;
        while (temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        count++;
        // int hh = k - 1;
        for (int i = 1; i < count; i++)
        {
            if (i < k)
            {
                temp1 = temp1->next;
            }
            if (i < count - k)
            {
                temp2 = temp2->next;
            }
        }
        swap(temp1->val, temp2->val);
        return head;
    }
};
int main()
{
    ListNode *headd;
    ListNode *sec;
    ListNode *third;
    ListNode *four;
    ListNode *five;
    headd->val = 1;
    headd->next = sec;

    sec->val = 2;
    sec->next = third;

    third->val = 3;
    third->next = four;

    four->val = 4;
    four->next = five;

    five->val = 5;
    headd->next = NULL;

    Solution h;
    h.swapNodes(headd);

    return 0;
}