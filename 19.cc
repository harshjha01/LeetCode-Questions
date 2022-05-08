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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // if (head->val == n)
        // {
        //     head = head->next;
        // }
        // ListNode *temp = head->next;
        // while (temp != NULL)
        // {
        //     if (temp->val == n)
        //     {
        //         head->next = temp->next;
        //     }
        //     head = head->next;
        //     temp = temp->next;
        // }
        // return head;
        // ListNode *temp = head;
        // int cont = 0;
        // while (temp != NULL)
        // {
        //     temp = temp->next;
        //     cont++;
        // }
        // ListNode *h = head;
        // ListNode *newtemp2 = head->next;
        // int k = cont - n + 1;
        // if (k == 1)
        // {
        //     head = head->next;
        //     return head;
        // }
        // while (k > 2 && h != NULL)
        // {
        //     h = h->next;
        //     k--;
        // }
        // h->next = h->next->next;
        // return head;
        ListNode *temp = head;
        int cont = 0;
        while (temp != NULL)
        {
            cont++;
            temp = temp->next;
        }
        if (cont == 1)
        {
            return NULL;
        };
        ListNode *newtemp = head;

        int k = cont - n - 1;
        if (k == -1)
        {
            newtemp->next = head;
            return head;
        }
        while (k--)
        {
            newtemp = newtemp->next;
        }
        newtemp->next = newtemp->next->next;

        return head;
    }
};

int main()
{

    return 0;
}