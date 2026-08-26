#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        ll x = 0;
 
        for (int i = 0; i < n; ++i)
        {
            // Calculate the gcd of the current answer and the absolute difference
            // between the i-th element and its corresponding element from the end
            x = __gcd(x, abs(a[i] - a[n - i - 1]));
        }
        cout << x << endl;
    }
 
    return 0;
}