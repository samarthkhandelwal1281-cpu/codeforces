#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        vector<pair<long long, int>> a(n), b(n), c(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
 
        for (int i = 0; i < n; i++)
        {
            cin >> b[i].first;
            b[i].second = i;
        }
 
        for (int i = 0; i < n; i++)
        {
            cin >> c[i].first;
            c[i].second = i;
        }
 
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
 
        long long ans = 0;
 
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    int ia = a[i].second;
                    int ib = b[j].second;
                    int ic = c[k].second;
                    if (ia != ib && ib != ic && ia != ic)
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}