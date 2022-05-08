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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *itr = head, *root = NULL, *rootitr = NULL;
        ListNode *prev = new ListNode(-1);
        prev->next = root;
        while (itr)
        {
            if (itr && itr->val == 0)
            {
                int sum = 0;
                itr = itr->next;
                while (itr && itr->val != 0)
                {
                    sum += itr->val;
                    itr = itr->next;
                }
                ListNode *node = new ListNode(sum);
                if (root == NULL && rootitr == NULL)
                {
                    root = node;
                    rootitr = root;
                    prev = prev->next;
                    // rootitr = rootitr->next;
                }
                else
                {
                    rootitr->next = node;
                    rootitr = rootitr->next;
                    prev = prev->next;
                }

                // itr = itr->next;
            }
        }
        rootitr->next = NULL;
        prev->next = NULL;
        return root;
    }
};
class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *itr = head, *root = NULL, *rootitr = NULL;
        while (itr)
        {
            if (itr->val == 0 && itr)
            {
                int sum = 0;
                itr = itr->next;
                while (!itr->next->val == 0 && itr)
                {
                    sum += itr->val;
                    itr = itr->next;
                }
                ListNode *node = new ListNode(sum);
                if (root == NULL && rootitr == NULL)
                {
                    root = node;
                    rootitr = root;
                    rootitr = rootitr->next;
                }
                else
                {
                    rootitr = node;
                    rootitr = rootitr->next;
                }

                itr = itr->next;
            }
        }
        return root;
    }
};
int main()
{

    return 0;
}