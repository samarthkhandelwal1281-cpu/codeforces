#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long ans = INT_MAX;
        for (int i = 0; i < 35; i++)
        {
            long long operations = i;
            long long newB = b + i;
            if (newB == 1)
                continue;
 
            long long copyA = a;
            while (copyA > 0)
            {
                copyA /= newB;
                operations++;
            }
            ans = min(ans, operations);
        }
        cout << ans << endl;
    }
 
    return 0;
}