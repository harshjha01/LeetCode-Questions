#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
// class Solution
// {
// public:
//     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//     {
//         vector<int> firstarray;
//         vector<int> secondarray;
//         while (l1)
//         {
//             firstarray.push_back(l1->val);
//             l1 = l1->next;
//         }
//         while (l2)
//         {
//             secondarray.push_back(l2->val);
//             l2 = l2->next;
//         }
//         reverse(firstarray.begin(), firstarray.end());
//         reverse(secondarray.begin(), secondarray.end());
//         int first = arraytoint(firstarray);
//         int sec = arraytoint(secondarray);
//         int sum = first + sec;
//     }
//     int arraytoint(vector<int> a)
//     {

//         int finalNumber = 0;

//         for (int i = 0; i < a.size(); i++)
//         {
//             int num = a[i];
//             if (num != 0)
//             {
//                 while (num > 0)
//                 {
//                     finalNumber *= 10;
//                     num /= 10;
//                 }
//                 finalNumber += a[i];
//             }
//             else
//             {
//                 finalNumber *= 10;
//             }
//         }
//         return finalNumber;
//     }
// };
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *first = l1;
        ListNode *second = l2;
        ListNode *ans = new ListNode();
        int carry = 0;
        while (first || second)
        {
            ans->val = first->val + second->val;
        }
    }
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        
    }
};
int main()
{

    return 0;
}