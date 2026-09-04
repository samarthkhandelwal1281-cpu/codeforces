#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;
        cout << ans << endl;
    }
 
    return 0;
}