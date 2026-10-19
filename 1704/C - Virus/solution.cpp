#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<long long> infected(m);
        for (int i = 0; i < m; i++)
            cin >> infected[i];
 
        sort(infected.begin(), infected.end());
 
        vector<long long> gap;
 
        gap.push_back((n - infected[m - 1]) + (infected[0] - 1));
        for (int i = 1; i < m; i++)
            gap.push_back(infected[i] - infected[i - 1] - 1);
 
        sort(gap.rbegin(), gap.rend());
 
        // long long cnt = 0;
        // while (gap.size() > 0)
        // {
        //     if (gap[0] == 0)
        //         gap.erase(gap.begin());
        //     cnt += (gap[0] - 1);
        //     int j = 1;
        //     while (j < gap.size())
        //     {
        //         gap[j] -= 2 * (gap[0] - 1);
        //         if (gap[j] <= 0)
        //             gap.erase(gap.begin() + j);
        //         else
        //             j++;
        //     }
        //     gap.erase(gap.begin());
        // }
        int numSaved = 0, numDays = 0; // Initialize counters for saved houses and days
 
        for (auto g : gap)
        {
            int currGap = g - numDays * 2; // Adjust current gap by the number of days passed
            if (currGap > 0)
            {
                numSaved++; // Protect the left extremity of the current gap
 
                currGap -= 2; // Protect the right extremity and all elements in the range
                if (currGap > 0)
                    numSaved += currGap;
 
                numDays += 2; // Increment the number of days
            }
        }
        cout << (n - numSaved) << endl;
    }
 
    return 0;
}