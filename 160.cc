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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (!headA || !headB)
        {
            return NULL;
        }

        ListNode *first = headA;
        ListNode *second = headB;
        int length1 = 0, length2 = 0;
        while (first)
        {
            length1++;
            first = first->next;
        }
        while (second)
        {
            length2++;
            second = second->next;
        }
        int diff = abs(length1 - length2);
        if (length1 > length2)
        {
            while (diff)
            {
                headA = headA->next;
                diff--;
            }
        }
        else
        {
            while (diff)
            {
                headB = headB->next;
                diff--;
            }
        }
        while (headA && headB)
        {
            if (headA == headB)
            {
                return headA;
            }
            headA = headA->next;
            headA = headB->next;
        }
        return NULL;
    }
};
// class Solution
// {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//     {
//         ListNode *first = headA;
//         ListNode *second = headB;
//         unordered_map<ListNode *, int> s;
//         while (first->next)
//         {

//             s[first]++;
//             first = first->next;
//         }
//         while (second->next)
//         {

//             if (s[second] > 0)
//             {
//                 return second;
//             }
//             second = second->next;
//         }
//         return NULL;
//     }
// };
int main()
{

    return 0;
}