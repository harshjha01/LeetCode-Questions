#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class FreqStack
{
public:
    unordered_map<int, int> freqcount;
    unordered_map<int, stack<int>> mainstk;
    int mostfreq = 0;
    FreqStack()
    {
    }

    void push(int val)
    {
        freqcount[val]++;
        mostfreq = max(mostfreq, freqcount[val]);
        mainstk[freqcount[val]].push(val);
    }

    int pop()
    {
        int sol = mainstk[mostfreq].top();
        mainstk[mostfreq].pop();
        freqcount[sol]--;
        if (mainstk[mostfreq].empty())
        {
            mostfreq--;
        }
        return sol;
    }
};

int main()
{

    return 0;
}