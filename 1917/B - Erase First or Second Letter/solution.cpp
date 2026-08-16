#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
 
    int t = 1; // Number of test cases
    cin >> t;
 
    while (t--)
    {
        int n; // Length of the string
        cin >> n;
        string s; // Input string
        cin >> s;
 
        map<char, int> freq;
        int count = 0; // To count distinct characters
        vector<int> distinct(n, 0);
 
        for (int i = 0; i < n; i++)
        { // Complexity: O(n log n)
            freq[s[i]]++;
            if (freq[s[i]] == 1)
            {
                count++; // Increment count if character appears for the first time
            }
            distinct[i] = count; // Store the count of distinct characters up to index i
        }
 
        ll ans = 0;
 
        for (int i = 0; i < n; i++)
        {
            ans += distinct[i];
        }
 
        cout << ans << endl;
    }
}