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
        ListNode *root = head;
        while (root->next)
        {
            if (root->val == root->next->val)
            {
                ListNode *temp = root;
                while (temp->val == temp->next->val)
                {
                    temp = temp->next;
                }
                root->next = temp;
            }
            root = root->next;
        }
        return head;
    }
};
int main()
{

    return 0;
}