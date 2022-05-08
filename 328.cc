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
    ListNode *oddEvenList(ListNode *head)
    {

        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenhead = head->next;
        while (even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = even->next;
            even = odd->next;
        }
        odd->next = evenhead;
        return head;
    }
};
int main()
{

    return 0;
}