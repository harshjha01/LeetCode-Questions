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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *start = head;
        ListNode *end = head;
        vector<int> kk;
        int l = left, k = left;
        while (--l)
        {
            start = start->next;
            end = end->next;
        }
        // start = start->next;
        // end = end->next;
        for (int i = 0; i < right - left; i++)
        {
            kk.push_back(start->val);
            start = start->next;
        }
        reverse(kk.begin(), kk.end());
        for (int i = 0; i < kk.size(); i++)
        {
            end->val = kk[i];
            end = end->next;
        }
        return head;
    }
};
int main()
{

    return 0;
}