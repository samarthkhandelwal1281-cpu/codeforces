#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, c;
        cin >> n >> c;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        for (int i = 0; i < n; i++)
            a[i] += (i + 1);
 
        sort(a.begin(), a.end());
        long long teleporters = 0;
        for (int i = 0; i < n; i++)
        {
            c -= a[i];
            if (c < 0)
                break;
            teleporters++;
        }
 
        cout << teleporters << endl;
    }
 
    return 0;
}