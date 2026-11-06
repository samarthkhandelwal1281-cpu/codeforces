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
 
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[a[i]]++;
 
        if (mp.size() <= 1)
        {
            cout << "NO
";
            continue;
        }
 
        cout << "YES
";
        int ind = 0;
        for (int i = 0; i < n; i++)
            if (a[i] != a[0])
            {
                ind = i;
                break;
            }
 
        for (int i = 1; i < n; i++)
        {
            if (a[0] != a[i])
                cout << "1 " << (i + 1) << "
";
            else
                cout << (ind + 1) << " " << (i + 1) << "
";
        }
    }
    return 0;
}