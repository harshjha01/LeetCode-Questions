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
    int numComponents(ListNode *head, vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        ListNode *itr = head;
        int sol = 0;
        while (itr)
        {
            if (mp.find(itr->val) != mp.end())
            {
                while (itr && mp[itr->val] > 0)
                {
                    itr = itr->next;
                }
                sol++;
            }
            else
            {
                itr = itr->next;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}