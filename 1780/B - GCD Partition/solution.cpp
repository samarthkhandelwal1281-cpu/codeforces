#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        long long sum = accumulate(a.begin(), a.end(), 0LL);
 
        vector<long long> pref;
        long long s = 0;
        for (auto i : a)
        {
            s += i;
            pref.push_back(s);
        }
 
        long long ggcd = 0;
        for (int i = 0; i < (n - 1); i++)
        {
            long long g = __gcd(pref[i], sum - pref[i]);
            ggcd = max(ggcd, g);
        }
 
        cout << ggcd << "
";
    }
 
    return 0;
}