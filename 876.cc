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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
// class Solution
// {
// public:
//     ListNode *middleNode(ListNode *head)
//     {
//         ListNode *root = head;
//         int size = 0;
//         while (root->next)
//         {
//             size++;
//             root = root->next;
//         }
//         if (size % 2 == 0)
//         {
//             size = size / 2;
//         }
//         else if (size % 2 != 0)
//         {
//             size = size / 2;
//             size++;
//         }
//         root = head;
//         while (size)
//         {
//             root = root->next;
//             size--;
//         }
//         return root;
//     }
// };
int main()
{

    return 0;
}