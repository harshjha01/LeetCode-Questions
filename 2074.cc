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
    ListNode *reversel(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *prev = NULL, *curr = head, *next = head->next;
        while (next != NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = next;
            next = next->next;
        }
        curr->next = prev;
        return curr;
    }
    ListNode *reverseEvenLengthGroups(ListNode *head)
    {
        if (!head || !head->next)
        {
            return head;
        }
        int count = 1;
        ListNode *itr = head;
        ListNode *previter = new ListNode(-1);
        previter->next = head;
        while (itr)
        {
            int size = 0;
            ListNode *prev = NULL, *temp = itr, *tojoin = previter;
            while (size != count && itr)
            {
                size++;
                prev = itr;
                itr = itr->next;
                previter = previter->next;
            }
            if (size % 2 == 0)
            {
                prev->next = NULL;
                ListNode *reverselist = reversel(temp);
                tojoin->next = reverselist;
                temp->next = itr;
                previter = temp;
            }
            count++;
        }
        return head;
    }
};
int main()
{

    return 0;
}