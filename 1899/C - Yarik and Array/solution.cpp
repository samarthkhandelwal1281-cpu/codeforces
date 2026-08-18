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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        int sum = a[0];
        int maxi = a[0];
 
        bool parity = (a[0] % 2 == 0); // odd:-false even:-true
 
        for (int i = 1; i < n; i++)
        {
            bool currparity = (a[i] % 2 == 0);
            if (currparity ^ parity)
                sum = max(a[i], sum + a[i]);
            else
                sum = a[i];
 
            parity = currparity;
            maxi = max(maxi, sum);
        }
        maxi = max(maxi, sum);
 
        cout << maxi << endl;
    }
 
    return 0;
}