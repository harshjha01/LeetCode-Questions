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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *first = list1;
        ListNode *second = list1;
        // while (--a)
        // {
        //     first = first->next;
        // }
        // while (--b)
        // {
        //     second = second->next;
        // }
        // first->next = list2;
        int cnt = 0;
        for (int i = 0; i <= b; i++)
        {
            if (cnt < a - 1)
            {
                first = first->next;
            }
            second = second->next;
            cnt++;
        }
        first->next = list2;
        while (list2)
        {
            list2 = list2->next;
        }
        list2->next = second;
        return list1;
    }
};
int main()
{

    return 0;
}