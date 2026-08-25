#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9 + 7)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        ll reorder = 1;
 
        for (int i = 0; i < n; i++)
        { // O(nlogn)
            // Find the number of elements in a that are greater than b[i]
            ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            ll count = a.size() - temp;
 
            // Update the result with the number of valid positions for a[i]
            reorder = reorder * max(count - i, 0LL) % MOD;
        }
 
        cout << reorder << endl;
    }
}