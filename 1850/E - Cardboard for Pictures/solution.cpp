#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, c;
        cin >> n >> c;
        vector<long long> s(n);
        for (long long i = 0; i < n; i++)
            cin >> s[i];
 
        long long ans = 1, low = 1, high = 1e9;
        while (low <= high)
        {
            long long w = low + (high - low) / 2;
            long long sum = 0;
 
            for (long long i = 0; i < n; i++)
            {
                sum += (s[i] + 2 * w) * (s[i] + 2 * w);
                if (sum > c)
                    break;
            }
 
            if (sum <= c)
            {
                ans = w;
                low = w + 1;
            }
            else
                high = w - 1;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}