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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        long long sum = 0;
        int negs = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                negs++;
                a[i] = -a[i];
            }
            sum += a[i];
        }
 
        sort(a.begin(), a.end());
        if (negs & 1)
            sum -= (2 * a[0]);
 
        cout << sum << "
";
    }
 
    return 0;
}
// 5
// 5 -2 -8 -6 -4