#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<long long> x(n + 1), y(n + 1);
        for (long long i = 1; i <= n; i++)
            cin >> x[i] >> y[i];
 
        // Calculate the direct cost from city s to city t
        long long ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);
 
        long long mina = 1e17, minb = 1e17;
        for (int i = 1; i <= k; i++)
        {
            mina = min(mina, abs(x[a] - x[i]) + abs(y[a] - y[i]));
            minb = min(minb, abs(x[b] - x[i]) + abs(y[b] - y[i]));
        }
 
        ans = min(ans, mina + minb);
        cout << ans << endl;
    }
 
    return 0;
}