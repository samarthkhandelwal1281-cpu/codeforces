#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        long long maxExpi = 0, maxi = 0, ans = 0;
        for (int i = 0; i < min(n, k); i++)
        {
            maxExpi += a[i];
            maxi = max(maxi, b[i]);
            ans = max(ans, maxExpi + (k - (i + 1)) * maxi);
        }
 
        cout << ans << endl;
    }
 
    return 0;
}