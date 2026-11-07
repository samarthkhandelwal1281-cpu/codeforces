#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n, 0);
        map<int, vector<int>> mp; // Map to store elements based on their remainder when divided by y
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i] % y].push_back(a[i]);
        }
 
        long long int ans = 0;
        for (auto it : mp)
        {
            vector<int> v = it.second;   // Get the vector of elements
            map<int, long long int> mp1; // Map to store counts of remainders when divided by x
            // Count occurrences of each remainder when elements are divided by x
            for (int i = 0; i < v.size(); i++)
                mp1[v[i] % x]++;
 
            for (auto it : mp1)
            {
                if (it.first == 0 || (it.first == x / 2 && x % 2 == 0))
                {
                    long long int cnt = it.second;
                    ans += (cnt * (cnt - 1)) / 2; // Combination of pairs from the same remainder
                    it.second = 0;
                }
                else
                {
                    long long int cnt1 = it.second;
                    long long int cnt2 = mp1[x - it.first];
                    ans += cnt1 * cnt2;    // Pairs from different remainders
                    mp1[x - it.first] = 0; // Avoid double counting
                }
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}