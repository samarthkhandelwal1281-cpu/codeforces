#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        sort(a.begin(), a.end());
        long long sum = 0, packs = 0;
 
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum <= x)
                packs += (x - sum) / (i + 1) + 1;
        }
 
        cout << packs << "
";
    }
    return 0;
}