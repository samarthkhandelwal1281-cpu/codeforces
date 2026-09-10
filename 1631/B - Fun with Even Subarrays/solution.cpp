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
 
        int op = 0;
        int i = n - 1;
 
        while (i >= 0 && a[i] == a[n - 1])
            i--;
 
        if (i == -1)
        {
            cout << 0 << endl;
            continue;
        }
 
        while (i >= 0)
        {
            i -= (n - 1 - i);
            op++;
 
            while (i >= 0 && a[i] == a[n - 1])
                i--;
        }
 
        cout << op << endl;
    }
 
    return 0;
}