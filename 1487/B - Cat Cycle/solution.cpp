#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        int ans = 0;
        if (n % 2 == 0)
        {
            ans = ((k % n) == 0) ? n : (k % n);
            cout << ans << "
";
            continue;
        }
 
        int skips = (k - 1) / (n / 2);
        ans = ((k + skips) % n);
        if (ans == 0)
            ans = n;
        cout << ans << endl;
    }
 
    return 0;
}