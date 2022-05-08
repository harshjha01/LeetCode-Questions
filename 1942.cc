#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int sol = -1;

    struct data
    {
        pair<int, int> al;
        int noofelement;
    };
    set<pair<int, int>> s;
    bool nomorecall = false;
    struct cmp
    {
        bool operator()(data a, data b)
        {

            return a.al.first > b.al.first;
        }
    };

    void helper(int targetfriend, data x)
    {
        pair<int, int> firstdata;
        firstdata = x.al;
        if (s.empty())
        {
            if (targetfriend == x.noofelement)
            {
                sol = 0;
                nomorecall = true;
            }

            s.insert({0, firstdata.second});
            return;
        }
        int count = 0;
        for (auto i : s)
        {
            if (i.second <= firstdata.second)
            {
                if (targetfriend == x.noofelement)
                {
                    nomorecall = true;
                    sol = i.first;
                    return;
                }
                else
                {
                    i.second = firstdata.second;
                }
            }
            else
            {

                count++;
            }
        }
        if (count == s.size())
        {
            pair<int, int> temp = *s.rbegin();
            s.insert({temp.first + 1, firstdata.second});
        }
    }
    int smallestChair(vector<vector<int>> &times, int targetFriend)
    {
        int n = times.size();
        // sort(times.begin(), times.end());
        priority_queue<data, vector<data>, cmp> q;
        for (int i = 0; i < n; i++)
        {
            data temp = {{times[i][0], times[i][1]}, i};
            // temp.al = {times[i][0], times[i][1]};
            // temp.noofelement(i);
            q.push(temp);
        }
        while (!q.empty())
        {
            data temp = q.top();
            q.pop();
            helper(targetFriend, temp);
            if (nomorecall)
            {
                break;
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}